```cpp
#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(double num) {
    return static_cast<int>(num);
}

int test_closest_integer() {
    double num;
    std::cout << "Enter a number: ";
    std::cin >> num; 
    assert(closest_integer(num) == static_cast<int>(num));
    std::cout << "The closest integer is: " << closest_integer(num) << std::endl;
    return 0; 
}