```cpp
#include <iostream>
#include <string>

bool isSimplePower(int num) {
    for (int base = 2; base * base <= num; ++base) {
        int power = 1;
        while (power * base <= num) {
            if ((power * base) == num) {
                return true;
            }
            ++power;
        }
    }
    return false;
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::getline(std::cin, input); 

    bool isValidInput = true;
    for (char c : input) {
        if (!std::isdigit(c)) {
            isValidInput = false;
            break;
        }
    }

    if (isValidInput) {
        input.erase(0, input.find_first_not_of("0123456789"));  // remove leading whitespace and non-digit characters
        int num = std::stoi(input);
        if (isSimplePower(num)) {
            std::cout << input << " is a simple power.\n";
        } else {
            std::cout << input << " is not a simple power.\n";
        }
    } else {
        std::cout << "Invalid input. Please enter a numeric value.\n";
    }

    return 0;
}