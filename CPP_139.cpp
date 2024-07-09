```cpp
#include <iostream>
#include <cmath>
#include <string>

std::string special_factorial(int n) {
    if (n <= 1)
        return "1";

    std::string result = "1";
    for (int i = 2; i <= n; i++) {
        long long mul_result = 1;
        for (int j = 2; j <= i; j++)
            mul_result *= j;

        if (i > 1)
            result += " * ";
        result += std::to_string(mul_result);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    try {
        if (n < 0) {
            throw std::invalid_argument("Input should be a non-negative integer.");
        } else {
            std::cout << "Special factorial of " << n << " is " << special_factorial(n) << std::endl;
        }
    } catch(const std::exception &e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}