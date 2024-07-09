```cpp
#include <iostream>
#include <string>

int luhn() {
    std::string ccNum;
    std::cout << "Enter a credit card number: ";
    std::cin >> ccNum;

    int sum = 0;
    for (int i = 0; i < ccNum.length(); i++) {
        int digit = ccNum[i] - '0';
        if ((i % 2 == 1)) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    int result = luhn();
    if (result % 10 == 0)
        std::cout << "The credit card number is valid." << std::endl;
    else
        std::cout << "The credit card number is invalid." << std::endl;

    return 0;
}