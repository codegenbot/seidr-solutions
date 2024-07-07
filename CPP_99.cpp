```cpp
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

int closest_integer(double num) {
    std::string str = (num >= 0 ? "" : "-");
    str += std::to_string(static_cast<int>(std::round(num)));
    return std::stoi(str);
}

int test_closest_integer() {
    double num = 5.0; 
    assert(closest_integer(num) == 5);
    std::cout << "The closest integer is: " << closest_integer(num) << std::endl;
    return 0; 
}