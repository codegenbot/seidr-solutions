#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> bf(std::string planet1, std::string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1)
        return vector<string>();

    int start = min(index1, index2);
    int end = max(index1, index2);

    vector<string> result;

    for (int i = 0; i < planets.size(); i++) {
        if (i >= start && i <= end) {
            bool added = false;
            for (int j = start; j < i; j++) {
                if (!result.empty()) {
                    break;
                }
                result.push_back(planets[j]);
                added = true;
            }
            if (!added) {
                result.push_back(planets[i]);
            }
        }
    }

    return result;
}