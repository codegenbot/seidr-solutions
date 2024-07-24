#include <iostream>
#include <string>
#include <utility>

bool issame(const std::pair<std::string, std::string>& p1, const std::pair<std::string, std::string>& p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

std::pair<std::string, std::string> bf(const std::pair<std::string, std::string>& planets) {
    // implement your logic here
    return planets;
}

int main() {
    std::pair<std::string, std::string> planets;
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    planets = std::make_pair(planet1, planet2);
    
    std::pair<std::string, std::string> result = bf(planets);
    if (issame(planets, result)) {
        std::cout << "same";
    } else {
        std::cout << "not same";
    }
    return 0;
}