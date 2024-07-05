#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int pos1 = -1, pos2 = -1;

    // Find positions of the planets
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) pos1 = i;
        if (planets[i] == planet2) pos2 = i;
    }

    // If any planet is not found, return empty result
    if (pos1 == -1 || pos2 == -1) return result;

    // Ensure pos1 is less than pos2
    if (pos1 > pos2) swap(pos1, pos2);

    // Collect planets between pos1 and pos2
    for (int i = pos1 + 1; i < pos2; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

// Check if two vectors of strings are the same
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    // Test case
    assert(issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}