#include <vector>
using namespace std;

bool issame(vector<string> vec1, vector<string> vec2) {
    return vec1 == vec2;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int index1 = -1, index2 = -1;
    for (int i = 0; i < planets.size(); ++i) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return result;
    }

    int start = min(index1, index2) + 1;
    int end = max(index1, index2);

    for (int i = start; i < end; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}