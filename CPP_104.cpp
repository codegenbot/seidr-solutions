#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> unique_digits(const std::vector<int>& nums) {
    std::vector<int> result;
    for (int num : nums) {
        while (num > 0) {
            int digit = num % 10;
            if (std::find(result.begin(), result.end(), digit) == result.end()) {
                result.push_back(digit);
            }
            num /= 10;
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}