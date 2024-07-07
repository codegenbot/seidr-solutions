#include <iostream>
#include <string>
#include <limits>
#include <boost/any.hpp>

std::string compare_one(std::string s1, int s2) {
    double d1 = std::stod(s1);
    if (d1 >= s2) return s1;
    else if (d1 == s2) return "None";
    else return std::to_string(s2);
}

int main() {
    std::cout << compare_one("123.45", 6789) << std::endl; 
    std::string s1 = "1";  
    int s2 = 2;  
    if(compare_one(s1, s2) == s1) std::cout << s1 << " is greater than or equal to " << s2 << std::endl;
    else std::cout << s2 << " is greater than " << s1 << std::endl;
    return 0;
}