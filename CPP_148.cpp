```cpp
#include <assert.h>
#include <vector>
#include <string>

bool issame(std::pair<std::string, std::string> a) {
    return a.first == a.second;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planetsList = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planetsList.size(); i++) {
        if (planetsList[i] == planet1) {
            index1 = i;
        } else if (planetsList[i] == planet2) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1)
        return {};
    
    std::vector<std::string> result;
    for (int i = 0; i < planetsList.size(); i++) {
        if ((i > index1 && i < index2) || (i > index2 && i < index1)) {
            result.push_back(planetsList[i]);
        }
    }
    
    return result;
}

int main() {
    assert(issame(std::make_pair("Earth", "Earth")));  
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    assert(bf(planet1, planet2).size() == 0);  
    return 0;
}