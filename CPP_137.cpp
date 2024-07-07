#include <iostream>
#include <string>
#include <limits>

std::string compare_one(std::string s1, int s2) {
    double d1 = std::stod(s1);
    if (d1 >= s2) return s1;
    else if (d1 == s2) return "None";
    else return std::to_string(s2);
}

int main() {
    std::cout << compare_one("123.45", 6789) << std::endl; 
    if(compare_one("1", 2) == "1") std::cout << "1 is greater than or equal to 2" << std::endl;
    else std::cout << "2 is greater than 1" << std::endl;
    return 0;
}