```
#include <iostream>

#ifndef MY_CPP_H
#define MY_CPP_H

long long special_factorial(int n) {
    if (n <= 1)
        return 1;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
        for (int j = 2; j <= i; j++)
            result *= j;
    }
    return result;
}

#endif

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    long long result = special_factorial(n);
    std::cout << "The special factorial of " << n << " is " << result << "." << std::endl;
    return 0;
}