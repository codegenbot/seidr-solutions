#include <vector>
#include <algorithm>
#include <string>
#include <assert.h>

using namespace std;

vector<string> bf(const string& planet1, const string& planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int start = -1, end = -1;
    
    for (size_t i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            start = i;
        }
        if (planet2 == planets[i]) {
            end = i;
        }
    }

    if (start == -1 || end == -1 || start >= end) {
        return {};
    }

    for (size_t i = start + 1; i < end; i++) {
        result.push_back(planets[i]);
    }

    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
    return 0;
}