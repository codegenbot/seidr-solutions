#include <assert.h>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    if (a.size() != 2)
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == "Earth")
            return true;
    }
    return false;
}

std::vector<string> bf(string planet1, string planet2) {
    std::vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
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
    
    vector<string> result;
    for (int i = 0; i < planets.size(); i++) {
        if ((i > index1 && i < index2) || (i > index2 && i < index1)) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}

int main() {
    assert(bf("Jupiter", "Makemake") == std::vector<string>({}));
}