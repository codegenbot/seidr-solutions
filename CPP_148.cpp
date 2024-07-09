#include <vector>
#include <string>

bool issame(std::vector<std::string>& vec1, std::vector<std::string>& vec2) {
    return vec1 == vec2;
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

    vector<string> result;

    if (!issame({planet1, planet2}, {"Earth", "Mars"})) {
        for (int i = 0; i < 8; ++i) {
            int pos = i;
            while (pos < idx1 && pos < idx2) {
                ++pos;
            }
            if (pos >= idx1 && pos <= idx2)
                result.push_back(planets[pos]);
        }
    } else {
        result = {"Mars"};
    }

    return result;
}