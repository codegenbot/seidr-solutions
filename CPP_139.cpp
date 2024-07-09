```cpp
#include <iostream>
#include <cmath>
#include <sstream>
#include <string>

std::string special_factorial(int n) {
    if (n <= 1)
        return "1";

    std::ostringstream result;
    result << "1";
    for (int i = 2; i <= n; i++) {
        long long mul_result = 1;
        for (int j = 2; j <= i; j++)
            mul_result *= j;

        if(i > 1)
            result << " * " << mul_result;
    }
    return result.str();
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Special factorial of " << n << " is " << special_factorial(n) << std::endl;
    return 0;
}