#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

int closest_integer(const char* num_str) {
    double num = std::stod(num_str);
    return lround(num);
}

int main() {
    double num;
    std::cin >> num;
    std::cout << closest_integer(std::to_string(num).c_str());
    assert(closest_integer("0.0") == 0);
    return 0;
}