#include <iostream>
#include <vector>
#include <string>

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
    
    if(index1 >= planets.size() || index2 >= planets.size()) {
        return {};
    } else if(abs(index2 - index1) + 1 > planets.size()) {
        return {};
    } else {
        std::vector<std::string> result;
        
        for (int i = index1; i <= index2; i++) { 
            if(i < planets.size() && i >= 0) { 
                result.push_back(planets[i]);
            } 
        }
        
        return result;
    }
}

int main() {
    std::cout << "Enter the first planet: ";
    std::string planet1;
    std::cin >> planet1;
    std::cout << "Enter the second planet: ";
    std::string planet2;
    std::cin >> planet2;

    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    if (!bf(planets, planet1, planet2).empty())
        std::cout << "Output: ";
    else
        std::cout << "No Output";
    
    return 0;
}