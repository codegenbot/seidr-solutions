#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> unique_digits(int x) {
    std::vector<int> uniqueDigits;
    while (x > 0) {
        int digit = x % 10;
        if (std::find(uniqueDigits.begin(), uniqueDigits.end(), digit) == uniqueDigits.end()) {
            uniqueDigits.push_back(digit);
        }
        x /= 10;
    }
    return uniqueDigits;
}

int main() {
    assert(issame(unique_digits(135), {1, 3, 5}));
    assert(issame(unique_digits(103), {1, 0, 3}));
    assert(issame(unique_digits(31), {3, 1}));
}