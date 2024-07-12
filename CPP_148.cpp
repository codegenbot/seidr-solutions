#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> bf(std::vector<std::string>& planets, std::string planet1, std::string planet2) {
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (i < planets.size() && planets[i][0] == planet1[0]) {
            index1 = i;
        } else if (i < planets.size() && planets[i][0] == planet2[0]) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1)
        return {};
    
    if(index2 < index1) {
        int temp = index1;
        index1 = index2;
        index2 = temp;
    }
    
    if(index2 - index1 + 1 > planets.size()) {
        std::vector<std::string> result;
        
        for (int i = 0; i <= index2; i++) { 
            if(i < planets.size()) { 
                result.push_back(planets[i]);
            } 
        }
        
        return result;
    } else {
        std::vector<std::string> result;
        for (int i = index1; i <= index2; i++) {
            if(i < planets.size()) { 
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