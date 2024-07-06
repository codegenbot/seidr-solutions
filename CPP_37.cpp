#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            std::vector<float> evenVals(l.begin() + i, l.begin() + i + 1);
            std::sort(evenVals.begin(), evenVals.end());
            result.push_back(evenVals[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(issame({-10, 2, 3, 4, 5, 8, 11, 12}, sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12})));
    return 0;
}