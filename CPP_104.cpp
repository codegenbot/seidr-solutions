#include <iostream>
#include <vector>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::unordered_set<int> digits(a.begin(), a.end());
    for (int digit : b) {
        if (digits.count(digit)) {
            return true;
        }
    }
    return false;
}

std::unordered_set<int> unique_digits(const std::vector<int>& input) {
    return std::unordered_set<int>(input.begin(), input.end());
}

int main() {
    return 0;
}