#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    for (int digit : b) {
        if (std::find(a.begin(), a.end(), digit) == a.end()) {
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