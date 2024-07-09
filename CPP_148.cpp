```cpp
#include <vector>
#include <string>

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;

    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            idx1 = i;
        }
        else if (planets[i] == planet2) {
            idx2 = i;
        }
    }

    if (idx1 == 0 || idx2 == 0)
        return vector<string>();

    for (int i = idx1 + 1; i < idx2; i++) {
        result.push_back(planets[i]);
    }

    return result;
}