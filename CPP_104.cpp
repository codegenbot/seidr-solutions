#include <vector>
#include <algorithm>
#include <cassert>
#include <unordered_set>

std::vector<int> unique_digits(const std::vector<int>& nums) {
    std::unordered_set<int> unique;
    for (int num : nums) {
        while (num > 0) {
            unique.insert(num % 10);
            num /= 10;
        }
    }
    return std::vector<int>(unique.begin(), unique.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}