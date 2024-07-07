#include <iostream>
#include <sstream>

int choose_num(int, int);

int main() {
    int num1, num2;
    std::cout << "Enter two numbers (separated by a space): ";
    if (!(std::getline(std::cin, std::stringstream tmp))) {
        std::cerr << "Invalid input. Please enter two integers." << std::endl;
        return 1; // Return with error code
    }
    num1 = std::stoi(tmp);
    if (!(std::getline(std::cin, tmp))) {
        std::cerr << "Invalid input. Please enter two integers." << std::endl;
        return 1; // Return with error code
    }
    num2 = std::stoi(tmp);
    int result = choose_num(num1, num2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

int choose_num(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}