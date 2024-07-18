#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::is_permutation(a.begin(), a.end(), b.begin());
}

bool unique_digits(const std::vector<int>& nums) {
    for (int num : nums) {
        std::vector<int> digits;
        while (num > 0) {
            int digit = num % 10;
            if (std::find(digits.begin(), digits.end(), digit) != digits.end()) {
                return false;
            }
            digits.push_back(digit);
            num /= 10;
        }
    }
    return true;
}

int main() {
    assert(issame({135, 103, 31}, {31, 135}));
    assert(unique_digits({135, 103, 31}));
    return 0;
}