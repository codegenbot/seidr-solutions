#include <vector>
#include <string>

bool issame(std::string p1, std::string p2) {
    // This function is supposed to check if two planets are the same
    // For simplicity, let's just consider them the same if they have the same name
    return p1 == p2;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    std::vector<std::string> result;

    for (int i = 0; i < planets.size(); i++) {
        if ((issame(planets[i], planet1) && issame(planets[i], planet2)) ||
            (i >= index1 && i <= index2)) {
            result.push_back(planets[i]);
        }
    }

    std::sort(result.begin(), result.end());
    return result;
}