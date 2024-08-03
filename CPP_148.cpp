#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1 == v2;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int idx1 = -1;
    int idx2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            idx1 = i;
        } else if (planet2 == planets[i]) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1) {
        return {};
    }

    std::vector<std::string> result;

    for (int i = 0; i < planets.size(); i++) {
        if (i > idx1 && i < idx2) {
            result.push_back(planets[i]);
        }
    }

    return result;
}