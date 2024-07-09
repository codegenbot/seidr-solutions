#include <vector>
#include <iostream>
#include <initializer_list>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isOdd = true; 
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (isOdd) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isOdd = !isOdd; 
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5};
    int result = luhn(digits);
    std::cout << "The Luhn check digit is: " << result << std::endl;
    return 0;
}