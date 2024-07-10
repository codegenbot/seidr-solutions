```cpp
#include <iostream>
#include <sstream>

int main_func() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;

    double b;
    std::string str;
    std::cout << "Enter a floating point number or a string: ";
    std::cin >> b; // This will be read as a double if possible

    if (std::cin.fail()) { 
        std::cin.clear();
        std::cin >> std::ws;
        str = "";
        try {
            b = std::stod(str);
            std::cout << "The result is: " << compare_one(a, b) << std::endl;
        } catch (std::invalid_argument& e) {
            int temp = std::stoi(str); 
            std::cout << "The result is: " << compare_one(a, temp) << std::endl;
        }
    } else {
        str = std::to_string(b);
        std::cout << "The result is: " << compare_one(a, std::stod(str)) << std::endl;
    }

    return 0;
}

double compare_one(int a, double b) {
    if (b > a) {
        return b;
    } else {
        return static_cast<double>(a);
    }
}