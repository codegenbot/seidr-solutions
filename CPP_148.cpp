#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> find_planets_between(const std::string& planet1, const std::string& planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        if (planets[i] == planet2) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1) {
        return {};
    }
    
    int start = std::min(index1, index2);
    int end = std::max(index1, index2);
    
    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }
    
    return result;
}

// Main function test case
assert(issame(find_planets_between("Jupiter", "Makemake"), {}));