#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> indices;
    for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            indices.push_back(i);
        }
    }
    std::vector<int> sorted_values;
    for (int idx : indices) {
        sorted_values.push_back(l[idx]);
    }
    std::sort(sorted_values.begin(), sorted_values.end());
    for (size_t i = 0; i < indices.size(); ++i) {
        l[indices[i]] = sorted_values[i];
    }
    return l;
}

std::vector<int> result = sort_third({5, 6, 3, 4, 8, 9, 2, 1});
assert(issame(result, {2, 6, 3, 4, 8, 9, 5, 1}));