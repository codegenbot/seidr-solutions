#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string>) {
    if (a.size() != 1) return false;
    for (const auto& planet : planets) {
        if (planet == a[0]) return true;
    }
    return false;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int i, j;
    for (i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) break;
    }
    for (j = 0; j < planets.size(); j++) {
        if (planet2 == planets[j]) break;
    }
    std::vector<string> result;
    if (i >= planets.size() || j >= planets.size()) return result;
    int start = std::max(i, 0);
    int end = std::min(j, planets.size());
    for (int k = start; k < end; k++) {
        result.push_back(planets[k]);
    }
    if (!issame({planet1}, {planet2})) return result;
    return {};
}

int main() {
    assert(bf("Jupiter", "Makemake") == {});
}