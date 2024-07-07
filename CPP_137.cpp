#include <iostream>
#include <string>
#include <limits>

bool isGreaterThanOrEqualTo(double d1, int s2) {
    return d1 >= s2.0;
}

int main() {
    double d1 = stod("123.45");
    int s2 = 6789;

    if (d1 >= s2) std::cout << "123.45 is greater than or equal to 6789" << std::endl;
    else if (d1 == s2) std::cout << "Both numbers are the same" << std::endl;
    else std::cout << "123.45 is less than 6789" << std::endl;

    if(isGreaterThanOrEqualTo(stod("1"), 2)) std::cout << "1 is greater than or equal to 2" << std::endl;
    else std::cout << "2 is greater than 1" << std::endl;
    
    return 0;
}