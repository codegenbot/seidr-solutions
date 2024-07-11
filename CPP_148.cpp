#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> issame(string a, string b) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int start = -1, end = -1;

    for (int i = 0; i < 8; i++) {
        if (a == planets[i]) {
            start = i;
        }
        if (b == planets[i]) {
            end = i;
        }
    }

    if (start == -1 || end == -1) {
        return result;
    }

    if (start > end) {
        swap(start, end);
    }

    for (int i = start + 1; i < end; i++) {
        result.push_back(planets[i]);
    }

    return result;
}

int main() {
    assert(issame("Jupiter", "Makemake").empty());
    return 0;
}