#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cassert>

bool assert_equal(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> counts(2, 0);
    std::string numStr = std::to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

assert_equal(even_odd_count(0), std::vector<int>{1, 0});
assert_equal(even_odd_count(123456), std::vector<int>{3, 3});
assert_equal(even_odd_count(-87654), std::vector<int>{2, 3});