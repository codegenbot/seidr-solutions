```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1)
        return vector<string>();

    int minIndex = min(index1, index2);
    int maxIndex = max(index1, index2);

    vector<string> result;

    for (int i = 0; i < planets.size(); i++) {
        if (i >= minIndex && i <= maxIndex)
            continue;
        if (i < minIndex) {
            result.push_back(planets[i]);
        }
        else {
            result.push_back(planets[minIndex - 1]);
        }
    }

    return result;
}