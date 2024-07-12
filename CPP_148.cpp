```cpp
#include <vector>
#include <string>

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets;
    planets.push_back("Mercury");
    planets.push_back("Venus");
    planets.push_back("Earth");
    planets.push_back("Mars");
    planets.push_back("Jupiter");
    planets.push_back("Saturn");
    planets.push_back("Uranus");
    planets.push_back("Neptune");

    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
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
    std::vector<std::string> result = bf(planet1, planet2);
    for (const auto& planet : result) {
        std::cout << planet << " ";
    }
    return 0;
}