#include <iostream>
#include <vector>

int luhnAlgorithm(std::vector<int> digits) {
    int sum = 0;
    int size = digits.size();

    for (int i = 0; i < size; i++) {
        if (i % 2 == 1) {
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9) {
                doubledDigit -= 9;
            }
            sum += doubledDigit;
        } else {
            sum += digits[i];
        }
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

    int result = luhnAlgorithm(digits);
    std::cout << result << std::endl;

    return 0;
}