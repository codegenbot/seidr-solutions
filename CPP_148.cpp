#include <vector>
#include <string>

bool issame(const std::string& planet1, const std::string& planet2);

std::vector<std::string> bf(std::string planet1, std::string planet2) {
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

    if (index1 == -1 || index2 == -1 || issame(planet1, planet2)) {
        return result;
    }

    int start = std::min(index1, index2) + 1;
    int end = std::max(index1, index2);

    for (int i = start; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}