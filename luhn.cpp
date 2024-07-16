```cpp
#include <iostream>

int luhn(int digits[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if ((i % 2) == 1) {
            int temp = digits[i] * 2;
            if (temp > 9)
                temp -= 9;
            sum += temp;
        } else
            sum += digits[i];
    }
    return sum;
}

int main() {
    int digits[] = {4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5};
    int n = sizeof(digits) / sizeof(digits[0]);
    std::cout << luhn(digits, n) << std::endl;
    return 0;
}