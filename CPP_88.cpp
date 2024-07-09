#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
 }

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return arr;
}

int custom_main() {
    std::vector<int> input = {21, 14, 23, 11};
    input = sort_array(input);
    assert(std::issame(input, std::vector<int>{23, 21, 14, 11}));
    return 0;
}