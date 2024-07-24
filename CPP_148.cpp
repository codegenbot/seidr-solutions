#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1 == v2;
}

int main() {
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    if (issame({planet1, planet2}, {"Jupiter", "Makemake"})) {
        std::cout << planet1 << " to " << planet2 << std::endl;
    } else if (issame({planet1, planet2}, {"Makemake", "Jupiter"})) {
        std::cout << planet2 << " to " << planet1 << std::endl;
    } else {
        std::cout << "Planets are not Jupiter and Makemake" << std::endl;
    }
    return 0;
}