#include <iostream>
#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integer(std::vector<int> lst) {
    std::vector<int> result = {0, 0};
    int largest_negative = std::numeric_limits<int>::min();
    int smallest_positive = std::numeric_limits<int>::max();
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    
    result[0] = largest_negative == std::numeric_limits<int>::min() ? 0 : largest_negative;
    result[1] = smallest_positive == std::numeric_limits<int>::max() ? 0 : smallest_positive;
    
    return result;
}

int main() {
    assert(is_same(largest_smallest_integer({-6, -4, -4, -3, -100, 1}), {-3, 1});
    
    return 0;
}