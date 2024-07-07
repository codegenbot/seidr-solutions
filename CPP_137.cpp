#include <iostream>
#include <string>
#include <limits>

bool isGreaterThanOrEqualTo(double d1, int s2) {
    if (d1 >= s2) return true;
    else if (d1 == s2) return false;
    else return false;
}

int main() {
    std::cout << std::from_chars(std::string("123.45").data(), std::string("123.45").data() + 7, 0).ptr[0] << " is greater than or equal to " << 6789 << std::endl; 
    if(isGreaterThanOrEqualTo(stod("1"), 2)) std::cout << "1 is greater than or equal to 2" << std::endl;
    else std::cout << "2 is greater than 1" << std::endl;
    return 0;
}