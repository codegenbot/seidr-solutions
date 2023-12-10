#include <iostream>
#include <vector>

int luhnAlgorithm(std::vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int doubledDigit = digits[i] * 2;
        if (doubledDigit > 9) {
            doubledDigit -= 9;
        }
        digits[i] = doubledDigit;
    }
    for (int digit : digits) {
        sum += digit;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        std::cin >> digits[i];
    }
    std::cout << luhnAlgorithm(digits) << std::endl;
    return 0;
}