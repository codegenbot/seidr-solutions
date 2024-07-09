#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> unique_digits(std::vector<int> digits) {
    std::sort(digits.begin(), digits.end());
    digits.erase(std::unique(digits.begin(), digits.end()), digits.end());
    return digits;
}

int main() {
    std::vector<int> digits = {135, 103, 31};

    assert(issame(unique_digits(digits), {31, 103, 135}));

    return 0;
}