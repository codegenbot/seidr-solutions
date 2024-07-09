#include <iostream>
#include <cmath>

std::string special_factorial(int n) {
    if (n <= 1)
        return "1";

    std::string result = "1";
    for (int i = 1; i <= n; i++) {
        long long mul_result = 1;
        for (int j = 2; j <= i; j++)
            mul_result *= j;

        std::cout << result << " * " << mul_result << std::endl;
        result = "1";
    }
    return "1";
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Special factorial of " << n << " is " << special_factorial(n) << std::endl;
    return 0;
}