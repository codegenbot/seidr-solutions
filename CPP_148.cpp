#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    // Check if planet1 or planet2 are valid planet names
    auto planet1Iter = find(planets.begin(), planets.end(), planet1);
    auto planet2Iter = find(planets.begin(), planets.end(), planet2);
    if (planet1Iter == planets.end() || planet2Iter == planets.end()) {
        return result;
    }

    // Get the indices of planet1 and planet2
    int index1 = distance(planets.begin(), planet1Iter);
    int index2 = distance(planets.begin(), planet2Iter);

    // Check if orbits are located between planet1 and planet2
    if (index1 < index2) {
        // Get all the planets between planet1 and planet2
        for (int i = index1 + 1; i < index2; i++) {
            result.push_back(planets[i]);
        }
    } else {
        // Get all the planets after planet1 and before planet2 (wrap around)
        for (int i = index1 + 1; i < planets.size(); i++) {
            result.push_back(planets[i]);
        }
        for (int i = 0; i < index2; i++) {
            result.push_back(planets[i]);
        }
    }

    return result;
}