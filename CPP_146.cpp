#include <iostream>
#include <string>

int specialFilter(int num) {
    std::string num_str = std::to_string(abs(num));
    if (abs(std::stoi(num_str)) > 10 && (std::stoi(num_str) % 10) % 2 != 0 && (std::stoi(num_str) / 10) % 10 % 2 != 0) {
        return 1;
    }
    return 0;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(specialFilter(num)) {
        std::cout << "The number is special." << std::endl;
    } else {
        std::cout << "The number is not special." << std::endl;
    }
    return 0;