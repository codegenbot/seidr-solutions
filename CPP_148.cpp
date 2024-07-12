#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> bf(const std::vector<std::string>& planets, const std::string& planet1, const std::string& planet2) {
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
    auto planets = std::vector<std::string>({"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"});
    assert (bf(planets, "Jupiter", "Makemake").empty());
    
    return 0;
}