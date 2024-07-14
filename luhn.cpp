#include <vector>
#include <iostream>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (doubleNext) {
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9)
                doubledDigit -= 9;
            sum += doubledDigit;
        } else {
            sum += digits[i];
        }
        doubleNext = !doubleNext; 
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 3, 4, 0};
    int result = luhn(digits);
    std::cout << "The Luhn check digit is: " << result << std::endl;
    return 0;
}