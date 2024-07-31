#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<std::string> result;

    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planet1 == planets[i]) {
            idx1 = i;
        }
        if (planet2 == planets[i]) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1) {
        return result;
    }

    int start = std::min(idx1, idx2) + 1;
    int end = std::max(idx1, idx2);

    for (int i = start; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    std::vector<std::string> result = bf("Earth", "Uranus");
    return 0;
}