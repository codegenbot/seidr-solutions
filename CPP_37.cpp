#include <vector>
#include <algorithm>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(checkEquality(sortEven({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), { -12, 8, 3, 4, 5, 2, 12, 11, 23, -10 }));
    return 0;
}

std::vector<float> sortEven(const std::vector<float>& l) {
    std::vector<float> evenVals;
    for (int j = 0; j < l.size(); j++) {
        if (j % 2 == 0) {
            evenVals.push_back(l[j]);
        }
    }
    std::sort(evenVals.begin(), evenVals.end());
    return evenVals;
}

std::vector<float> checkEquality(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}