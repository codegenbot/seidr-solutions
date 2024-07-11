#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != planets[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Makemake"};
    
    int index1 = -1;
    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
            break;
        }
    }
    
    int index2 = -1;
    for (int i = 0; i < planets.size(); i++) {
        if (planet2 == planets[i]) {
            index2 = i;
            break;
        }
    }
    
    std::vector<std::string> result;
    
    if (index1 >= 0 && index2 >= 0) {
        if (index1 > index2) {
            for (int i = index1; i >= index2 + 1; i--) {
                result.push_back(planets[i]);
            }
        } else if (index1 < index2) {
            for (int i = index1; i <= index2 - 1; i++) {
                result.push_back(planets[i]);
            }
        } else {
            return result;
        }
    }
    
    return result;
}