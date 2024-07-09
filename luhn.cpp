```cpp
#include <string>
#include <vector>

int luhn(std::string ccNum) {
    long long sum = 0;
    for (int i = 0; i < ccNum.length(); i++) {
        int digit = (ccNum[i] - '0');
        if ((i % 2 == 1)) {
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
    std::cout << "Enter a credit card number: ";
    std::cin >> ccNum;
    int result = luhn(ccNum);
    std::cout << "The Luhn check value is: " << result << std::endl;
    return 0;
}