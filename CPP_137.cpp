#include <string>
#include <iostream>

bool compare_one(std::string a, double b) {
    if (std::stod(a) > b)
        return true;
    else
        return false;
}

int main() {
    std::cout << std::boolalpha;
    std::cout << compare_one("1.5", 2.0) << std::endl; // prints: true
    std::cout << compare_one("2.5", 3.0) << std::endl; // prints: false
    return 0;
}