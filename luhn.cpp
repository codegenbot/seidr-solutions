#include <vector>
#include <iostream>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int temp = (i % 2 == 1) ? digits[i] * 2 : digits[i];
        if (temp > 9) {
            temp -= 9;
        }
        sum += temp;
    }
    return sum % 10 == 0;
}

int main() {
    std::vector<int> testDigits = {4, 5, 3, 0, 4, 6, 7, 1, 3, 9, 2, 5, 8};
    int result = luhn(testDigits);
    if (result) {
        std::cout << "Valid credit card number\n";
    } else {
        std::cout << "Invalid credit card number\n";
    }
    return 0;
}