```cpp
#include <vector>
#include <string>

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
        
        if (index1 != -1 && index2 != -1)
            break;
    }
    
    if (index1 == -1 || index2 == -1)
        return std::vector<std::string>();
    
    int start = std::min(index1, index2);
    int end = std::max(index1, index2) + 1;
    
    std::vector<std::string> result;
    for (int i = start; i < end; i++) {
        if (i >= planets.size())
            break;
        result.push_back(planets[i]);
    }
    
    return result;
}