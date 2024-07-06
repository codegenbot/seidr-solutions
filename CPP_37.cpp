```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_even(std::vector<float> l) {
    vector<float> evenVals;
    vector<float> oddVals;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evenVals.push_back(l[i]);
        } else {
            oddVals.push_back(l[i]);
        }
    }

    std::sort(evenVals.begin(), evenVals.end());

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
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}