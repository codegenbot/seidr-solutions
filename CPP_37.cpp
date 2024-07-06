```cpp
#include <vector>
#include <algorithm>

bool issame(const vector<float>& a, const vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int numTestCases;
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {
        int numElements;
        cin >> numElements;

        vector<float> list;
        for (int j = 0; j < numElements; j++) {
            float element;
            cin >> element;
            list.push_back(element);
        }

        vector<float> result = sort_even(list);

        cout << "List #" << i + 1 << ":";
        for (float val : result) {
            cout << " " << val;
        }
        cout << endl;
    }

    return 0;
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