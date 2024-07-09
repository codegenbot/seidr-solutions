```cpp
#include <iostream>
#include <cmath>
#include <string>

std::string special_factorial(int n) {
    if (n <= 1)
        return "1";

    std::string result = "";
    long long mul_result = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= i; j++)
            mul_result *= j;

        if(i > 1) 
            result += " * " + std::to_string(mul_result);
        else
            result = std::to_string(mul_result);

        // Reset the multiplier to avoid overflow
        mul_result = 1;
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