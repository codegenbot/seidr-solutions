```
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int max_negative = INT_MAX;
    int min_positive = INT_MIN;

    for (int i : lst) {
        if (i < 0 && i < max_negative) {
            max_negative = i;
        } else if (i > 0 && i > min_positive) {
            min_positive = i;
        }
    }

    return {std::max({(max_negative), (min_positive)}, 0)};
}