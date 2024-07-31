#include <vector>
#include <algorithm>

using namespace std;

vector<string> bf(string planet1, string planet2);

bool issame(const vector<string> &a, const vector<string> &b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int start = -1, end = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) start = i;
        if (planets[i] == planet2) end = i;
    }

    if (start == -1 || end == -1 || start >= end) return result;

    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    vector<string> expected_result = {};
    vector<string> result = bf("Jupiter", "Makemake");
    
    if (issame(result, expected_result)) {
        return 0;
    } else {
        return -1;
    }
}