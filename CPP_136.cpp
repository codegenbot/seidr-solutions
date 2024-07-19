#include <iostream>
#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integer(std::vector<int> lst) {
    std::vector<int> result = {0, 0};
    int largest_negative = 0;
    int smallest_positive = 0;

    bool found_largest_negative = false;
    bool found_smallest_positive = false;

    for (int num : lst) {
        if (num < 0 && (!found_largest_negative || num > largest_negative)) {
            largest_negative = num;
            found_largest_negative = true;
        } else if (num > 0 && (!found_smallest_positive || num < smallest_positive)) {
            smallest_positive = num;
            found_smallest_positive = true;
        }
    }

    result[0] = largest_negative;
    result[1] = smallest_positive;

    return result;
}

int main() {
    assert(is_same(largest_smallest_integer({-6, -4, -4, -3, -100, 1}), {-3, 1});

    return 0;
}