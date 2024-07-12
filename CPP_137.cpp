#include <iostream>
#include <string>

std::string compare_one(std::string a, std::string b) {
    float x = std::stof(a);
    float y = std::stof(b);
    return (x > y) ? a : ((y > x) ? b : a);
}