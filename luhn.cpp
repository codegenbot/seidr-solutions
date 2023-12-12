#include <iostream>
#include <vector>

int main() {
    int n = 16;
    std::vector<int> digits(n);

    for (int i = 0; i < n; i++) {
        std::cin >> digits[i];
    }

    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (i % 2 == 1) {
            int digit = digits[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += digits[i];
        }
    }

    std::cout << sum << std::endl;

    return 0;
}