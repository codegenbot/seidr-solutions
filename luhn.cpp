#include <iostream>
#include <vector>

int main() {
    std::vector<int> digits(16);
    for (int i = 0; i < 16; i++) {
        int digit;
        std::cin >> digit;
        digits[i] = digit;
    }

    int sum = 0;
    for (int i = 14; i >= 0; i -= 2) {
        int doubledDigit = digits[i] * 2;
        if (doubledDigit > 9) {
            doubledDigit -= 9;
        }
        sum += doubledDigit;
    }

    for (int i = 15; i >= 0; i -= 2) {
        sum += digits[i];
    }

    sum -= digits[0];

    std::cout << sum << std::endl;

    return 0;
}