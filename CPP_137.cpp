#include <iostream>
#include <limits>

bool isGreaterThanOrEqualTo(double d1, int s2) {
    if (d1 >= s2) return true;
    else if (d1 == s2) return false;
    else return false;
}

int main() {
    long long num = stol("12345");
    if(isGreaterThanOrEqualTo(num, 6789)) std::cout << "12345 is greater than or equal to 6789" << std::endl;
    else std::cout << "6789 is greater than 12345" << std::endl;
    
    long long num1 = stol("1");
    if(isGreaterThanOrEqualTo(num1, 2)) std::cout << "1 is greater than or equal to 2" << std::endl;
    else std::cout << "2 is greater than 1" << std::endl;
    
    return 0;
}