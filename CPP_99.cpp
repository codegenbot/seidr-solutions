#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(double input_num) {
    return lround(input_num);
}

int closest_integer(int input_num) {
    return input_num;
}

int main() {
    double input_num;
    std::cin >> input_num;

    int input_num_int = static_cast<int>(input_num);

    std::cout << closest_integer(input_num);
    assert(closest_integer(0.0) == 0);
    assert(closest_integer(0) == 0); // Updated assert for integer input
    assert(closest_integer(input_num) == static_cast<int>(input_num)); // Updated assert with integer value
    return 0;
}