```cpp
#include <iostream>

int luhn(int digits[16]) {
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        if ((i % 2) == 1) {
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9) {
                doubledDigit -= 9;
            }
            sum += doubledDigit;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    int digits[16] = {4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5};
    std::cout << luhn(digits) << std::endl;
    return 0;
}