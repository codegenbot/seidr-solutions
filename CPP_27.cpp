#include <iostream>
#include <string>

std::string filp_case(std::string input) {
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] -= 32;
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] += 32;
        }
    }
    return input;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Flipped case: " << filp_case(input) << std::endl;
    return 0;
}