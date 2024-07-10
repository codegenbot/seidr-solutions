#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            // even index, sort values at these indices
            vector<float> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
        } else {
            // odd index, keep values as they are
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    vector<float> expected = {-12, 2, 3, 4, 5, 8, 11, 12, 23, -10};
    assert(issame(sort_even(input), expected));
    return 0;
}