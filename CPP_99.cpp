```cpp
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

int closest_integer(double num) {
    std::string str = (num >= 0 ? "" : "-");
    str += std::to_string(num); 
    return std::stoi(str);
}

int test_closest_integer() {
    double num;
    std::cout << "Enter a number: ";
    std::cin >> num; 
    assert(closest_integer(num) == static_cast<int>(num));
    std::cout << "The closest integer is: " << closest_integer(num) << std::endl;
    return 0; 
}