#include <vector>
#include <string>

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    return (v1.size() == v2.size()) && (std::equal(v1.begin(), v1.end(), v2.begin()));
}

std::vector<std::string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
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

    vector<string> result;

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