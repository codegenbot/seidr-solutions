#include <vector>
#include <algorithm>

int luhn(std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 1) {
            int doubleDigit = std::accumulate(std::begin(digits), std::end(digits), 0, [&](int acc, int n){ return acc + n*2; }) - (doubleDigit > 9 ? 9 * (doubleDigit / 9) : 0);
            sum += doubleDigit;
        } else {
            sum += digits[i];
        }
    }
    return sum % 10;
}