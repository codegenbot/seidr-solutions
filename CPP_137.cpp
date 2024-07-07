#include <iostream>
#include <limits>

bool isGreaterThanOrEqualTo(double d1, int s2) {
    if (d1 >= s2) return true;
    else return false;
}

int main() {
    double num = 0.0;
    std::cout << "Enter a number: ";
    while (!(std::cin >> num)) {
        std::cerr << "Invalid input. Please enter a numeric value." << std::endl;
        std::cout << "Enter a number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    if(isGreaterThanOrEqualTo(num, 6789)) std::cout << num << " is greater than or equal to 6789" << std::endl;
    else std::cout << "6789 is greater than " << num << std::endl;
    
    double num1 = 0.0;
    std::cout << "Enter another number: ";
    while (!(std::cin >> num1)) {
        std::cerr << "Invalid input. Please enter a numeric value." << std::endl;
        std::cout << "Enter another number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    if(isGreaterThanOrEqualTo(num1, 2)) std::cout << num1 << " is greater than or equal to 2" << std::endl;
    else std::cout << "2 is greater than " << num1 << std::endl;
    
    return 0;
}