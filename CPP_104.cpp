#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

bool issame(const std::unordered_set<int>& a, const std::unordered_set<int>& b) {
    for (int digit : b) {
        if (a.count(digit)) {
            return true;
        }
    }
    return false;
}

std::unordered_set<int> unique_digits(const std::vector<int>& input) {
    return std::unordered_set<int>(input.begin(), input.end());
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), unique_digits({31, 135})));
    return 0;
}