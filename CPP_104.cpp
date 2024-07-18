#include <vector>
#include <algorithm>
#include <cassert>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> unique_digits(const std::vector<int>& nums) {
    std::unordered_set<int> uniqueSet;
    for (int num : nums) {
        while (num > 0) {
            uniqueSet.insert(num % 10);
            num /= 10;
        }
    }
    std::vector<int> uniqueDigits(uniqueSet.begin(), uniqueSet.end());
    return uniqueDigits;
}

void main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
}