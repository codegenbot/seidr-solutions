#include <vector>
#include <iostream>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((i % 2 == 0 && digits[i] * 2 <= 9) || i % 2 != 0) {
            sum += digits[i];
        } else {
            sum += (digits[i] * 2) % 10 + 1;
        }
    }
    return sum;
}

int main() {
    std::vector<int> input(16);
    for (int i = 0; i < 16; i++) {
        std::cin >> input[i];
    }
    int result = luhn(input);
    std::cout << "The Luhn check sum is: " << result << std::endl;
    return 0;
}