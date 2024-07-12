```cpp
#include <iostream>
#include <vector>
#include <string>
#include <assert.h>

std::vector<std::string> bf(const std::vector<std::string>& planets, const std::string& planet1, const std::string& planet2) {
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i][0] == planet1[0]) {
            index1 = i;
        } else if (planets[i][0] == planet2[0]) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1)
        return {};
    
    std::vector<std::string> result;
    for (int i = 0; i < planets.size(); i++) {
        if (i > index1 && i < index2) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}

int main() {
    std::cout << "Enter the first planet: ";
    std::string planet1;
    std::cin >> planet1;
    std::cout << "Enter the second planet: ";
    std::string planet2;
    std::cin >> planet2;

    // Create a list of planets
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    // Call the bf function with the planets and planets to find the result
    std::vector<std::string> result = bf({planet1}, planet1, planet2);
    
    for (const auto& planet : result) {
        std::cout << planet << " ";
    }
    return 0;
}