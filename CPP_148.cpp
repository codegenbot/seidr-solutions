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
    std::vector<std::string> inputPlanets;
    
    int n;
    std::cout << "Enter the number of planets: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::string planet;
        std::cout << "Enter the name of the " << (i+1) << "th planet: ";
        std::cin >> planet;
        inputPlanets.push_back(planet);
    }
    
    if(!inputPlanets.empty()) {
        std::vector<std::string> result = bf(inputPlanets, "Earth", "Saturn");
        
        if (!result.empty())
            std::cout << "Output: ";
        else
            std::cout << "No Output";
        
    } else {
        std::cout << "No Output";
    }
    
    return 0;
}