#include <string>
#include <iostream>

std::string compare_one(std::string a, float b) {
    if (std::stof(a) > b) {
        return a;
    } else if (b < 1) {
        return "None";
    } else {
        return std::to_string(b);
    }
}

int main() {
    std::string s;
    float f;
    std::cout << "Enter string: ";
    std::cin >> s;
    std::cout << "Enter float: ";
    std::cin >> f;
    std::cout << compare_one(s, f) << std::endl;
    return 0;
}