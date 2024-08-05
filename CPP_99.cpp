#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(const std::string& input_num_str) {
    double input_num = std::stod(input_num_str);
    return lround(input_num);
}

int main() {
    std::string input_num_str;
    std::cin >> input_num_str;
    std::cout << closest_integer(input_num_str);
    assert(closest_integer("0") == 0);
    assert(closest_integer("0.5") == 1);
    return 0;
}