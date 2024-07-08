#include <iostream>
#include <string>
#include <vector>

int luhn(const std::vector<std::string>& digits) {
    // Your implementation of Luhn's algorithm here
}

int main() {
    std::vector<std::string> input;
    int output = 0;

    // Read input from the user
    for (int i = 0; i < 16; i++) {
        std::cout << "Enter a digit: ";
        std::cin >> input[i];
    }

    // Apply Luhn's algorithm to the input
    output = luhn(input);

    // Print the result
    std::cout << "The sum of all of the new digits is: " << output << std::endl;

    return 0;
}