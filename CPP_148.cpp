#include <string>
#include <vector>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int start = -1, end = -1;

    for (int i = 0; i < 8; i++) {
        if (a[i] == planets[i]) {
            start = i;
        }
        if (b[i] == planets[i]) {
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

    return result;
}