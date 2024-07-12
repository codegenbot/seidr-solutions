#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;
    int idx1 = -1, idx2 = -1;
    std::string planet1 = "Jupiter";
    std::string planet2 = "Makemake";

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            idx1 = i;
        }
        if (planets[i] == planet2) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1) {
        return 0;
    }

    if (idx1 > idx2) {
        std::swap(idx1, idx2);
    }

    for (int i = idx1 + 1; i < idx2; i++) {
        result.push_back(planets[i]);
    }

    assert(issame(result, std::vector<std::string>{"Jupiter", "Makemake"}));

    return 0;
}