#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    int index1 = -1, index2 = -1;

    for (int i = 0; i < 8; i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1)
        return result;

    for (int i = 0; i < index1; i++) {
        if (i >= index2)
            break;
        result.push_back(planets[i]);
    }

    for (int i = index1 + 1; i <= index2; i++) {
        result.push_back(planets[i]);
    }

    return result;
}