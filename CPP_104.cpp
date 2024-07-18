#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> unique_digits(std::vector<int> nums) {
    std::vector<int> result;
    for (int num : nums) {
        std::vector<int> digits;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        std::sort(digits.begin(), digits.end());
        int unique_num = 0;
        for (int digit : digits) {
            unique_num = unique_num * 10 + digit;
        }
        if (std::find(result.begin(), result.end(), unique_num) == result.end()) {
            result.push_back(unique_num);
        }
    }
    return result;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}