#include <iostream>
#include <string>

std::string change_base(int x, int base) {
    std::string result = "";

    // Repeat until x is greater than 0
    while (x > 0) {
        // Get the current digit
        int digit = x % base;

        // Convert the digit to string and append it to the result
        result = std::to_string(digit) + result;

        // Update x to be the quotient of x divided by base
        x /= base;
    }

    return result;
}

int main() {
    std::cout << change_base(8, 3) << std::endl;
    std::cout << change_base(8, 2) << std::endl;
    std::cout << change_base(7, 2) << std::endl;

    return 0;
}