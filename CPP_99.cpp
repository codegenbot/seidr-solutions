#include <iostream>
#include <cmath>

int closest_integer(std::string num_str) {
    double num = std::stod(num_str);
    return lround(num);
}

int main() {
    std::string num_str;
    std::cin >> num_str;
    std::cout << closest_integer(num_str);
    return 0;
}