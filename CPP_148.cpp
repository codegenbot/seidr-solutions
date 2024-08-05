#include <string>
#include <vector>

vector<string> bf(string planet1, string planet2);

bool issame(vector<string> a, vector<string> b) {
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

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int index1 = -1, index2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    int start = min(index1, index2) + 1;
    int end = max(index1, index2);

    for (int i = start; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}