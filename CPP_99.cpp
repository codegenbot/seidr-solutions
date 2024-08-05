#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

int closest_integer(const std::string& num) {
    return lround(std::stod(num));
}

int main() {
    std::string num;
    std::cin >> num;
    std::cout << closest_integer(num);
    return 0;
}