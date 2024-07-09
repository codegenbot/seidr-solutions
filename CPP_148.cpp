#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b, const std::vector<std::string>& c) {
    return a == b && b == c;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); ++i) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        else if (planet2 == planets[i]) {
            index2 = i;
        }
        
        if (index1 != -1 && index2 != -1)
            break;
    }
    
    if (index1 == -1 || index2 == -1) {
        return {};
    }
    
    std::vector<std::string> result;
    for (int i = 0; i < planets.size(); ++i) {
        if (index1 < i && i < index2)
            result.push_back(planets[i]);
    }
    
    std::sort(result.begin(), result.end());
    
    return result;
}

void run() {
    assert(issame(bf("Jupiter", "Mars"), {"Venus", "Earth"})); 
}