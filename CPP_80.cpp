```cpp
#include <iostream>

bool is_happy(int n);

bool is_happy(int n) {
    if (n < 1) return false;
    while (n > 1) {
        int sum = 0;
        while (n) {
            n %= 10;
            sum += n * n;
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}