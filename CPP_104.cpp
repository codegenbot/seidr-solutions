#include <vector>
#include <algorithm>
#include <cassert>
#include <unordered_set>

std::vector<int> unique_digits(const std::vector<int>& a) {
    std::unordered_set<int> uniqueSet;

    for (int num : a) {
        while (num > 0) {
            uniqueSet.insert(num % 10);
            num /= 10;
        }
    }

    return std::vector<int>(uniqueSet.begin(), uniqueSet.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return unique_digits(a) == unique_digits(b);
}

int main() {
    assert(issame(std::vector<int>{135, 103, 31}, std::vector<int>{31, 135}));
    return 0;
}