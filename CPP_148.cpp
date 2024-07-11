#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int start = -1, end = -1;

    for (int i = 0; i < 8; i++) {
        if (a[0] == planets[i]) {
            start = i;
        }
        if (b[0] == planets[i]) {
            end = i;
        }
    }

    if (start == -1 || end == -1) {
        return false;
    }

    if (start > end) {
        swap(start, end);
    }

    for (int i = start + 1; i < end; i++) {
        result.push_back(planets[i]);
    }

    return true;
}