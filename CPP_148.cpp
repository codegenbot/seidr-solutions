#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;
    int start = -1, end = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            start = i;
        }
        if (planet2 == planets[i]) {
            end = i;
        }
    }

    if (start == -1 || end == -1 || start == end) {
        return {};
    }

    if (start > end) {
        std::swap(start, end);
    }

    result.insert(result.end(), planets.begin() + start + 1, planets.begin() + end);

    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}