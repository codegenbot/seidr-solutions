#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    for (int i = 0; i < 8; ++i) {
        if (planet1 == planets[i]) {
            int start = i;
            break;
        }
    }

    for (int i = 0; i < 8; ++i) {
        if (planet2 == planets[i]) {
            int end = i;
            break;
        }
    }

    if (start > end) {
        swap(start, end);
    }

    for (int i = start + 1; i <= end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}