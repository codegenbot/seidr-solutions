```cpp
#include <iostream>
#include <vector>
using namespace std;

bool issame(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            return planet2 == planets[(i + 7) % 8];
        }
    }
    return false;
}

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    sort(planets.begin(), planets.end());
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planet1 == planets[i]) {
            index1 = i;
        }
        else if (planet2 == planets[i]) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    vector<string> result;

    for (int i = 0; i < planets.size(); i++) {
        if ((i > index1 && i < index2) || (i > index2 && i < index1)) {
            result.push_back(planets[i]);
        }
    }

    return result;
}

int main() {
    string planet1, planet2;
    cout << "Enter the first planet: ";
    cin >> planet1;
    cout << "Enter the second planet: ";
    cin >> planet2;

    vector<string> result = bf(planet1, planet2);

    if (!result.empty()) {
        sort(result.begin(), result.end());
        cout << "The planets between " << planet1 << " and " << planet2 << " are: ";
        for (string planet : result) {
            cout << planet << " ";
        }
        cout << endl;
    } else {
        if (!issame(planet1, planet2)) {
            cout << "The planets " << planet1 << " and " << planet2 << " are the same." << endl;
        } else {
            cout << "The planets cannot be between themselves because they're the same." << endl;
        }
    }

    return 0;
}