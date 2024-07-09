#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> unique_digits(std::vector<int> digits) {
    std::vector<int> unique;
    for (int digit : digits) {
        while (digit > 0) {
            int current_digit = digit % 10;
            if (std::find(unique.begin(), unique.end(), current_digit) == unique.end()) {
                unique.push_back(current_digit);
            }
            digit /= 10;
        }
    }
    return unique;
}

int main() {
    std::vector<int> digits = {135, 103, 31};

    assert(issame(unique_digits(digits), {31, 135}));

    return 0;
}