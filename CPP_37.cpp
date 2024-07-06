```cpp
#include <vector>
#include <algorithm>

bool issame(const vector<float>& a, const vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
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

int main() {
    vector<float> a = {1.5, 3.8, 2.9, 4.7};
    vector<float> b = {1.5, 2.9, 3.8, 4.7};

    if (issame(a, b)) {
        vector<float> result = sort_even(a);
        for (float i : result) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Vectors are not the same" << endl;
    }

    return 0;
}