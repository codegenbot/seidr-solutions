#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    std::vector<int> digits_a;
    std::vector<int> digits_b;

    while (a > 0) {
        digits_a.push_back(a % 10);
        a /= 10;
    }

    while (b > 0) {
        digits_b.push_back(b % 10);
        b /= 10;
    }

    std::sort(digits_a.begin(), digits_a.end());
    std::sort(digits_b.begin(), digits_b.end());

    return std::unique(digits_a.begin(), digits_a.end()) == digits_a.end() &&
           std::unique(digits_b.begin(), digits_b.end()) == digits_b.end();
}