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
    vector<float> vec1 = {4.7, 3.5, 8.9, 2.2, 6.4};
    vector<float> vec2 = {8.9, 4.7, 3.5, 6.4, 2.2};

    if (issame(vec1, vec2)) {
        vector<float> result = sort_even(vec1);
        for (float x : result) {
            cout << x << " ";
        }
        return 0;
    } else {
        cout << "Vectors are not the same." << endl;
        return -1;
    }
}