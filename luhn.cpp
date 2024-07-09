```cpp
#include <vector>

int luhn(int ccNum[16]) {
    long long sum = 0;
    for (int i = 0; i < 16; i++) {
        int digit = ccNum[i];
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
    int ccNum[16]; 
    std::cout << "Enter a credit card number: ";
    for (int i = 0; i < 16; ++i) {
        std::cin >> ccNum[i];
    }
    int result = luhn(ccNum);
    std::cout << "The Luhn check value is: " << result << std::endl;
    return 0;
}