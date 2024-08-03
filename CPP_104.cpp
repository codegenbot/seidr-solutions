#include <iostream>
#include <unordered_set>
#include <cassert>

bool issame(const std::unordered_set<int>& a, const std::vector<int>& b) {
    for (int digit : b) {
        if (a.count(digit) == 0) {
            return false;
        }
    }
    return true;
}

std::unordered_set<int> unique_digits(const std::vector<int>& input) {
    return std::unordered_set<int>(input.begin(), input.end());
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}