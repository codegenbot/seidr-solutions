#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int pos1 = -1, pos2 = -1;

    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) pos1 = i;
        if (planets[i] == planet2) pos2 = i;
    }

    if (pos1 == -1 || pos2 == -1) return result;

    if (pos1 > pos2) swap(pos1, pos2);

    for (int i = pos1 + 1; i < pos2; ++i) {
        result.push_back(planets[i]);
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    // Test using assertions
    assert(issame(bf("Jupiter", "Makemake"), {}));
    
    // Get user inputs and display the result
    string planet1, planet2;
    cin >> planet1 >> planet2;
    
    vector<string> result = bf(planet1, planet2);
    for (string planet : result) {
        cout << planet << " ";
    }
    cout << endl;
    
    return 0;
}