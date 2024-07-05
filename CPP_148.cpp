#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> planetsBetween(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int pos1 = -1, pos2 = -1;

    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) pos1 = i;
        if (planets[i] == planet2) pos2 = i;
    }

    if (pos1 == -1 || pos2 == -1) return result;

    if (pos1 > pos2) swap(pos1, pos2);

    for (int i = pos1 + 1; i < pos2; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(planetsBetween("Jupiter", "Makemake"), {}));
    assert(issame(planetsBetween("Earth", "Saturn"), {"Mars", "Jupiter"}));
    assert(issame(planetsBetween("Venus", "Mars"), {"Earth"}));
    return 0;
}