```cpp
#include <iostream>

bool is_happy(int n) {
    if (n < 1)
        return false;

    int sum = 0;
    while (n != 1) {
        n = sum;
        sum = 0;
        while (n != 0) {
            int digit = n % 10;
            n /= 10;
            sum += digit * digit;
        }
    }

    return true;
}

int main_problem() {
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;  
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}