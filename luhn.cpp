#include <iostream>
#include <vector>

int main() {
    std::vector<int> digits;

    for (int i = 0; i < 16; i++) {
        int digit;
        std::cin >> digit;
        digits.push_back(digit);
    }

    int sum = 0;
    for (int i = 16 - 2; i >= 0; i -= 2) {
        int doubledDigit = digits[i] * 2;
        if (doubledDigit > 9) {
            doubledDigit -= 9;
        }
        sum += doubledDigit;
        sum += digits[i + 1];
    }

    std::cout << sum << std::endl;

    return 0;
}