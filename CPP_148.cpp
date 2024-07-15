#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
vector<string> result;

vector<string> find_planets_between(const string& planet1, const string& planet2) {
    int start = -1, end = -1;

    for(int i = 0; i < planets.size(); ++i) {
        if(planets[i] == planet1) {
            start = i;
        }
        if(planets[i] == planet2) {
            end = i;
        }
    }

    if(start == -1 || end == -1) {
        return result;
    }

    if(start > end) {
        swap(start, end);
    }

    for(int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    assert(issame(find_planets_between("Jupiter", "Makemake"), {}));

    return 0;
}