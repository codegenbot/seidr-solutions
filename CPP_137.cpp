#include <string>
#include <iostream>

std::string compare_one(std::string a, float b) {
    if (stod(a) > b)
        return a;
    else
        return "None";
}

int main() {
    std::cout << compare_one("1.5", 2.0f) << std::endl; // Example usage
    return 0;
}