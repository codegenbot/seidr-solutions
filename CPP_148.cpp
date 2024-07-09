#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    int index1 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            index1 = i;
            break;
        }
    }

    int index2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet2) {
            index2 = i;
            break;
        }
    }

    vector<string> result;
    if (index1 >= 0 && index2 >= 0) {
        for (int i = max(0, index1); i <= min(index2, planets.size() - 1); ++i) {
            result.push_back(planets[i]);
        }
    } else {
        result.clear();
    }

    return result;
}