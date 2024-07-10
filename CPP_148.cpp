#include <iostream>
#include <vector>
#include <string>

bool b(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;

bool bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1)
        return std::vector<std::string>();
    
    std::vector<std::string> result;
    for (int i = 0; i < planets.size(); i++) {
        if (i > index1 && i < index2) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}

int main() {
    std::string planet1, planet2;
    std::cout << "Enter the first planet: ";
    std::cin >> planet1;
    std::cout << "Enter the second planet: ";
    std::cin >> planet2;
    std::vector<std::string> result = bf(planet1, planet2);
    if (result.empty()) {
        std::cout << "No planets found between " << planet1 << " and " << planet2 << ".\n";
    } else {
        std::cout << "Planets between " << planet1 << " and " << planet2 << ": ";
        for (const auto& planet : result) {
            std::cout << planet << " ";
        }
        std::cout << "\n";
    }
    return 0;
}