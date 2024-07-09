```cpp
#include <iostream>
#include <string>
#include <sstream>

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
    int num;
    std::cout << "Enter a number: ";
    if (!(std::cin >> num)) {
        std::cout << "Invalid input. Please enter a numeric value.\n";
    } else {
        bool isValidInput = true;
        std::ostringstream oss;
        oss << num; // Insert the number here
        std::string numStr = oss.str();
        
        for (char c : numStr) { 
            if (!std::isdigit(c)) {
                isValidInput = false;
                break;
            }
        }

        if (isValidInput) {
            if (isSimplePower(num)) {
                std::cout << "The number is a simple power.\n";
            } else {
                std::cout << "The number is not a simple power.\n";
            }
        } else {
            std::cout << "Invalid input. Please enter a numeric value.\n";
        }
    }

    return 0;
}