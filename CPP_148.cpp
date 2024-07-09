```c++
#include <vector>
#include <algorithm>
#include <string>

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

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}
int main() {
    assert(isSame(bf("Jupiter", "Makemake") , {})); 
}