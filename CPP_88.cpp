#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

namespace contest {
    std::vector<int> sort_array(const std::vector<int>& arr) {
        std::vector<int> sorted_arr = arr;
        std::sort(sorted_arr.begin(), sorted_arr.end());
        return sorted_arr;
    }

    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
}

int main() {
    assert(contest::issame(contest::sort_array({21, 14, 23, 11}), contest::sort_array({11, 14, 21, 23}));
    std::cout << "Arrays are the same" << std::endl;

    return 0;
}