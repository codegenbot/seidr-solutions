#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    auto it1 = find(planets.begin(), planets.end(), planet1);
    auto it2 = find(planets.begin(), planets.end(), planet2);

    if (it1 == planets.end() || it2 == planets.end()) {
        return result;
    }

    if (it1 > it2) {
        swap(it1, it2);
    }

    for (auto it = it1 + 1; it != it2; ++it) {
        result.push_back(*it);
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    assert(issame(bf("Mercury", "Mars"), {"Venus", "Earth"}));
    assert(issame(bf("Neptune", "Jupiter"), {"Saturn", "Uranus"}));
    cout << "All tests passed!" << endl;
    return 0;
}