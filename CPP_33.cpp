#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(l[i]);
        }
    }
    std::sort(sorted_indices.begin(), sorted_indices.end());

    int sorted_idx = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l[i] = sorted_indices[sorted_idx++];
        }
    }

    return l;
}

int main() {
    std::vector<int> input = {5, 2, 9, 3, 7, 6, 1, 4, 8};
    std::vector<int> expected_output = {1, 2, 9, 4, 7, 6, 5, 3, 8};
    std::vector<int> output = sort_third(input);
    assert(issame(output, expected_output));

    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));

    return 0;
}