#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune" };
    vector<string> result;

    if (find(planets.begin(), planets.end(), planet1) == planets.end() || find(planets.begin(), planets.end(), planet2) == planets.end()) {
        return result;
    }

    int start = min(static_cast<int>(find(planets.begin(), planets.end(), planet1) - planets.begin()), static_cast<int>(find(planets.begin(), planets.end(), planet2) - planets.begin()));
    int end = max(static_cast<int>(find(planets.begin(), planets.end(), planet1) - planets.begin()), static_cast<int>(find(planets.begin(), planets.end(), planet2) - planets.begin()));

    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}