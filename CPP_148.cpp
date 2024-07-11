```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        else if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    int start = std::min(index1, index2);
    int end = std::max(index1, index2);

    std::vector<std::string> result;
    for (int i = 0; i < planets.size(); i++) {
        if (i >= start && i <= end) {
            result.push_back(planets[i]);
        }
    }

    return result;
}