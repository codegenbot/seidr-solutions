#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    int index1 = -1, index2 = -1;
    for (int i = 0; i < 8; ++i) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return result; // Return empty vector if either planet is not found
    }

    for (int i = 0; i < 8; ++i) {
        if ((index1 < i && i < index2) || (index2 < i && i < index1)) {
            result.push_back(planets[i]);
        }
    }

    return result;
}