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

        if(i > 1)
            result += " * " + std::string(std::to_string(mul_result));
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