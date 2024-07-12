#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> bf(const std::string& planet1, const std::string& planet2) {
    std::vector<std::string> result;
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int idx1 = -1, idx2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            idx1 = i;
        }
        if (planets[i] == planet2) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1) {
        return {};
    }

    if (idx1 > idx2) {
        std::swap(idx1, idx2);
    }

    for (int i = idx1 + 1; i < idx2; i++) {
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}