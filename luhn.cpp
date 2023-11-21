#include <iostream>
#include <vector>

int luhnAlgorithm(const std::vector<int>& digits) {
    int sum = 0;
    int size = digits.size();

    for (int i = size - 1; i >= 0; i--) {
        int digit = digits[i];

        if ((size - i) % 2 == 0) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

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

    int result = luhnAlgorithm(digits);
    std::cout << result << std::endl;

    return 0;
}