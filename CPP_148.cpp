#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> bf(string planet1, string planet2);

bool issame(vector<string> a, vector<string> b);

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int start = -1, end = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            start = i;
        } else if (planets[i] == planet2) {
            end = i;
        }
    }
    if (start == -1 || end == -1) {
        return {};
    }
    if (start > end) {
        swap(start, end);
    }
    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}