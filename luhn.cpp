```cpp
#include <iostream>
#include <string>

int luhn(std::string ccNum) {
    int sum = 0;
    for (int i = 0; i < ccNum.length(); i++) {
        int n = ccNum[i] - '0';
        if ((i % 2 == 1)) {
            n *= 2;
            if (n > 9)
                n -= 9;
        }
        sum += n;
    }
    return sum;
}

int main() {
    std::string ccNum;
    std::cout << "Enter a credit card number: ";
    std::getline(std::cin, ccNum);
    
    int result = luhn(ccNum);
    if (result % 10 == 0)
        std::cout << "The credit card number is valid." << std::endl;
    else
        std::cout << "The credit card number is invalid." << std::endl;

    return 0;
}