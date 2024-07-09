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
    int num;
    std::cout << "Enter a number: ";
    if (!(std::cin >> num)) {
        std::cout << "Invalid input. Please enter a numeric value.\n";
    } else {
        bool isValidInput = true;
        std::string numStr = std::itoa(num);
        
        for (char c : numStr) { 
            if (!std::isdigit(c)) {
                isValidInput = false;
                break;
            }
        }

        if (isValidInput) {
            if (isSimplePower(num)) {
                std::cout << num << " is a simple power.\n";
            } else {
                std::cout << num << " is not a simple power.\n";
            }
        } else {
            std::cout << "Invalid input. Please enter a numeric value.\n";
        }
    }

    return 0;
}