#include <iostream>
#include <cmath>
#include <string>

std::string special_factorial(int n) {
    if (n <= 1)
        return "1";

    std::string result = "";
    for (int i = 2; i <= n; i++) {
        long long mul_result = 1;
        for (int j = 2; j <= i; j++)
            mul_result *= j;

        std::string mul_str = std::to_string(mul_result);
        result += i > 1 ? " * " + mul_str : mul_str;
    }
    return "n! = " + result;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Special factorial of " << n << " is " << special_factorial(n) << std::endl;
    return 0;
}