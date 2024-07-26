#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

namespace contest {
    std::vector<int> sort_array(std::vector<int> arr) {
        std::sort(arr.begin(), arr.end());
        return arr;
    }

    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
}

assert(contest::issame(contest::sort_array({21, 14, 23, 11}), contest::sort_array({11, 14, 21, 23}));
std::cout << "Arrays are the same" << std::endl;