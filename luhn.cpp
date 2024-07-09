```cpp
#include <string>

int luhn(std::string ccNum) {
    long long sum = 0;
    for (char c : ccNum) {
        int digit = c - '0';
        if ((ccNum.find(c) % 2 == 1)) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    return static_cast<int>(sum);
}

int main() {
    std::string ccNum;
    // Input the credit card number
    std::cout << "Enter your credit card number: ";
    std::cin >> ccNum;

    int result = luhn(ccNum);

    std::cout << "The result of Luhn's algorithm is: " << result << "\n";
}