#include <iostream>
#include <limits>

bool isGreaterThanOrEqualTo(double d1, int s2) {
    if (d1 >= s2) return true;
    else if (d1 == s2) return false;
    else return false;
}

int main() {
    double num = std::stod("123.45");
    if(isGreaterThanOrEqualTo(num, 6789)) std::cout << "123.45 is greater than or equal to 6789" << std::endl;
    else std::cout << "6789 is greater than 123.45" << std::endl;
    
    double num1 = std::stod("1");
    if(isGreaterThanOrEqualTo(num1, 2)) std::cout << "1 is greater than or equal to 2" << std::endl;
    else std::cout << "2 is greater than 1" << std::endl;
    
    return 0;
}