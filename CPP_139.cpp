```
#include <iostream>
#include <cmath>

long long special_factorial(int n) {
    if (n <= 1)
        return 1;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        long long fact = 1;
        for (int j = 1; j <= i; j++)
            fact *= j;
        result += fact;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Special factorial of " << n << " is " << special_factorial(n) << std::endl;
    return 0;
}