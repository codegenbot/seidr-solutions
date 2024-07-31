#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string> &a, const vector<string> &b){
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> findPlanetsBetween(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    size_t start = -1, end = -1;
    for (size_t i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            start = i;
        }
        if (planets[i] == planet2) {
            end = i;
        }
    }

    if (start == -1 || end == -1) {
        return result;
    }

    if (start > end) {
        swap(start, end);
    }

    for (size_t i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    assert(issame(findPlanetsBetween("Jupiter", "Makemake"), vector<string>{}));
    return 0;
}