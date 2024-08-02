#include <iostream>
#include <vector>

int luhnAlgorithm(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if ((digits.size() - i) % 2 == 0) {
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
    std::vector<int> creditCardNumber = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7};
    int result = luhnAlgorithm(creditCardNumber);
    std::cout << "Sum of new digits: " << result << std::endl;
    return 0;
}