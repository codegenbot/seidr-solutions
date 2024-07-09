#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1)
        return {};

    int minIndex = std::min(index1, index2);
    int maxIndex = std::max(index1, index2);

    std::vector<std::string> result;

    for (int i = 0; i < planets.size(); i++) {
        if (i >= minIndex && i <= maxIndex)
            continue;
        if (i < minIndex) {
            result.push_back(planets[i]);
        }
        else {
            result.push_back(planets[i - 1]);
        }
    }

    return result;
}

int main() {
    assert(std::issame(bf("Jupiter", "Makemake"), {})); 
}