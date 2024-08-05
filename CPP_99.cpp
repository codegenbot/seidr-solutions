#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(double input_num) {
    return lround(input_num);
}

int main() {
    double input_num;
    std::cin >> input_num;
    std::cout << closest_integer(input_num);
    return 0;
}