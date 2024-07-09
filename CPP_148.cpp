```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            int index1 = i;
        } else if (planets[i] == planet2) {
            int index2 = i;
        }
        
        if (index1 != -1 && index2 != -1)
            break;
    }

    if (index1 == -1 || index2 == -1)
        return {};

    vector<string> result;

    for (int i = 0; i < planets.size(); i++) {
        if (i >= index1 && i <= index2) {
            result.push_back(planets[i]);
        }
    }

    return result;
}