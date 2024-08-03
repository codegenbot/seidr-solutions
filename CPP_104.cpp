#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

bool issame(const std::unordered_set<int>& a) {
    for (int digit : a) {
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
    assert(issame(unique_digits({135, 103, 31})));
    return 0;
}