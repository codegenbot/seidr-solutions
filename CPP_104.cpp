#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>
#include <algorithm>

bool issame(const std::unordered_set<int>& a, const std::unordered_set<int>& b) {
    return a == b;
}

std::unordered_set<int> unique_digits(const std::vector<int>& input) {
    return std::unordered_set<int>(input.begin(), input.end());
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), std::unordered_set<int>({31, 135})));
    return 0;
}