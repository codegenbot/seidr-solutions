#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::unordered_set<int> set_a(a.begin(), a.end());
    for (int digit : b) {
        if (set_a.count(digit) == 0) {
            return false;
        }
    }
    return true;
}

std::unordered_set<int> unique_digits(const std::vector<int>& input) {
    return std::unordered_set<int>(input.begin(), input.end());
}