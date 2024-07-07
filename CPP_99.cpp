```c++
#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    return (num >= 0) ? std::ceil(num) : std::floor(num);
}

int main 
{
    std::string userInput;
    std::cout << "Enter a number: ";
    std::cin >> userInput; 
    std::cout << "The closest integer is: " << closest_integer(userInput) << std::endl;
}