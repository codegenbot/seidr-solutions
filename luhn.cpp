#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isDouble = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if (isDouble) {
            if (digit * 2 > 9) {
                digit = digit * 2 - 9;
            } else {
                digit *= 2;
            }
        }

        sum += digit; 
        isDouble = !isDouble;
    }

    return sum;

}

int main() {
    std::vector<int> digits;
    // input your card number here
    for (int i = 0; i < 16; ++i) {
        int temp;
        std::cin >> temp;
        digits.push_back(temp);
    }
    int result = luhn(digits);
    return 0;
}