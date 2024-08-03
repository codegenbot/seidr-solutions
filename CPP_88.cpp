#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const custom::vector<int>& a, const custom::vector<int>& b) {
    return a == b;
}

namespace custom {
    std::vector<int> sort_array(const std::vector<int>& array) {
        std::vector<int> sorted_array = array;

        if (sorted_array.empty()) return sorted_array;

        if ((sorted_array.front() + sorted_array.back()) % 2 == 0)
            std::sort(sorted_array.rbegin(), sorted_array.rend());
        else
            std::sort(sorted_array.begin(), sorted_array.end());

        return sorted_array;
    }
}

assert(issame(custom::sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));