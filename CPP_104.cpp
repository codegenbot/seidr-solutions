#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
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
    assert(issame(unique_digits(1), {1}));
    assert(issame(unique_digits(0), {0}));
    assert(issame(unique_digits(3), {3}));
}