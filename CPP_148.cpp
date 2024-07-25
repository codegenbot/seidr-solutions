#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> bf(const string& planet1, const string& planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Makemake"};
    vector<string> result;

    int start = -1, end = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            start = i;
        }
        if (planets[i] == planet2) {
            end = i;
        }
    }

    if (start == -1 || end == -1) {
        return result;
    }

    if (start > end) {
        swap(start, end);
    }

    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}