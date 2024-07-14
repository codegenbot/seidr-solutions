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
    return sum;
}

int main() {
    std::vector<int> digits;
    for(int i = 0; i < 16; i++) {
        int digit;
        std::cin >> digit;
        digits.push_back(digit);
    }
    int result = luhn(digits);
    std::cout << "The Luhn check sum is: " << result << std::endl;
    return 0;
}