```cpp
#include <vector>
#include <algorithm>

bool issame(const vector<float>& a, const vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    cin >> n;

    vector<float> l(n);

    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }

    vector<float> sortedEvenVals = sort_even(l);
    
    cout << "Sorted Even Values: ";
    for (float val : sortedEvenVals) {
        cout << val << " ";
    }
    cout << endl;
}

vector<float> sort_even(vector<float> l) {
    vector<float> evenVals;
    vector<float> oddVals;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evenVals.push_back(l[i]);
        } else {
            oddVals.push_back(l[i]);
        }
    }

    sort(evenVals.begin(), evenVals.end());

    vector<float> result;
    int idx = 0;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(evenVals[idx++]);
        } else {
            result.push_back(oddVals[i - idx]);
        }
    }

    return result;
}