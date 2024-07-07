#include <iostream>
#include <string>
#include <cmath>

int closest_integer(double num) {
    if(num >= 0) {
        return ceil(num);
    } else {
        return floor(num);
    }
}

int main() {
    double userInput = 0;
    std::cout << "Enter a number: ";
    std::cin >> userInput; 
    std::cout << "The closest integer is: " << closest_integer(userInput) << std::endl;
    return 0;