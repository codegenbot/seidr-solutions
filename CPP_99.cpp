```
#include <iostream>
#include <cmath>

int closest_integer(double num) {
    if (num >= 0) {
        return static_cast<int>(std::ceil(num));
    } else {
        return static_cast<int>(std::floor(num));
    }
}

int main 
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num; 
    std::cout << "The closest integer is: " << closest_integer((double)num) << std::endl;
    assert(closest_integer(0.5) == 0);
}