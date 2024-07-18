#include <vector>
#include <algorithm>
#include <cassert>
#include <set>

std::vector<int> unique_digits(const std::vector<int>& nums) {
    std::set<int> uniqueDigits;
    for (int num : nums) {
        while (num > 0) {
            uniqueDigits.insert(num % 10);
            num /= 10;
        }
    }
    return std::vector<int>(uniqueDigits.begin(), uniqueDigits.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}