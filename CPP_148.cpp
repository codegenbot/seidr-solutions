```
#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    // Code remains the same
}

std::vector<std::string> issame(int n1, int n2) {
    if (n1 > 8 || n1 < 0 || n2 > 8 || n2 < 0) {
        return {};
    }
    
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    if (n1 >= n2) {
        std::vector<std::string> result;
        for (int i = n1; i >= n2; i--) {
            result.push_back(planets[i]);
        }
        return result;
    } else {
        int index1 = 0, index2 = 0;
        for (int i = 0; i < planets.size(); i++) {
            if (planets[i] == planet1) {
                index1 = i;
            } 
            else if (planets[i] == planet2) {
                index2 = i;
            }
        }

        std::vector<std::string> result;
        for (int i = 0; i < planets.size(); i++) {
            if (i >= index1 && i <= index2) {
                result.push_back(planets[i]);
            }
        }

        sort(result.begin(), result.end());
        return result;
    }
}