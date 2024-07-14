```cpp
#include <iostream>

int luhn(int digits[16]) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if ((i % 2 == 1)) {
            int temp = (digits[i] * 2) % 10 + (digits[i] * 2) / 10;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}