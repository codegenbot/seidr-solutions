#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> findPlanets(std::string planet1, std::string planet2) {
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

    std::vector<std::string> result;

    for (int i = 0; i < planets.size(); i++) {
        if ((i > index1 && i < index2) || (i > index2 && i < index1)) {
            result.push_back(planets[i]);
        }
    }

    std::sort(result.begin(), result.end());

    return result;
}

int main() {
    assert(findPlanets("Jupiter", "Makemake") == {});
    return 0;
}