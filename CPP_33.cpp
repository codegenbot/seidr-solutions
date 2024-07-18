#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> sorted_indices;
    for (size_t i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(l[i]);
        }
    }
    std::sort(sorted_indices.begin(), sorted_indices.end());

    int sorted_idx = 0;
    for (size_t i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l[i] = sorted_indices[sorted_idx++];
        }
    }
    
    return l;
}

int main() {
    std::vector<int> input = {7, 2, 8, 5, 1, 3, 4, 6, 9};
    std::vector<int> expected_output = {1, 2, 3, 5, 7, 6, 4, 8, 9};
    std::vector<int> result = sort_third(input);
    assert(issame(result, expected_output));

    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
  
    return 0;
}