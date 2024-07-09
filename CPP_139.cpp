Here is the modified code:

#include <iostream>
#include <cmath>

long long special_factorial(int n) {
    if (n <= 1)
        return 1;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i * (i - 1 + 1);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Special factorial of " << n << " is " << special_factorial(n) << std::endl;
    return 0;