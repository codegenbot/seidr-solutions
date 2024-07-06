#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> evenVals;
    std::vector<float> oddVals;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evenVals.push_back(l[i]);
        } else {
            oddVals.push_back(l[i]);
        }
    }

    std::sort(evenVals.begin(), evenVals.end());

    std::vector<float> result;
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
    assert(std::equal(sort_even({2, 3, 11, 12, -10, 4, 5, 8, -12, 23}).begin(), sort_even({2, 3, 11, 12, -10, 4, 5, 8, -12, 23}).end(), {2, 3, 4, 5, 8, -10, -12, 11, 12, 23}));
    return 0;
}