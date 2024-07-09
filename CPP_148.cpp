#include <vector>
#include <string>

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int idx1 = -1, idx2 = -1;

    for (int i = 0; i < 8; ++i) {
        if (planets[i] == planet1) {
            idx1 = i;
        } else if (planets[i] == planet2) {
            idx2 = i;
        }
    }

    if (idx1 == -1 || idx2 == -1)
        return {};

    std::vector<std::string> result;

    for (int i = 0; i < 8; ++i) {
        int pos = i;
        while (pos < idx1 && pos < idx2) {
            ++pos;
        }
        if (pos >= idx1 && pos <= idx2)
            result.push_back(planets[pos]);
    }

    return result;
}