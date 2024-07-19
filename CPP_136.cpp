#include <iostream>
#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integer(std::vector<int> lst) {
    std::vector<int> result = {INT_MIN, INT_MAX};
    
    for (int num : lst) {
        if (num < 0 && num > result[0]) {
            result[0] = num;
        } else if (num > 0 && num < result[1]) {
            result[1] = num;
        }
    }
    
    return result;
}

int main() {
    assert(is_same(largest_smallest_integer({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    
    return 0;
}