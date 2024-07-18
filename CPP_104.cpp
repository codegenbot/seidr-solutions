#include <vector>
#include <algorithm>
#include <cassert>
#include <set>

std::vector<int> unique_digits(const std::vector<int>& nums) {
    std::set<int> uniqueSet;
    for (int num : nums) {
        while (num > 0) {
            uniqueSet.insert(num % 10);
            num /= 10;
        }
    }
    return std::vector<int>(uniqueSet.begin(), uniqueSet.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(unique_digits(std::vector<int>{135, 103, 31}), unique_digits(std::vector<int>{31, 135})));
    return 0;
}