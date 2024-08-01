#include <string>
#include <iostream>

std::string compare_one(std::string a, float b) {
    if (atof(a.c_str()) > b) 
        return a;
    else if (b < 1)
        return "None";
    else
        return std::to_string(b);
}

int main() {
    std::cout << compare_one("10.5", 2.0f) << std::endl; // Example usage
    return 0;
}