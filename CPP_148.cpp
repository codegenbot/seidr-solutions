#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    if (planet1 == "" || planet2 == "") {
        return {};
    }

    int index1 = -1, index2 = -1;
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }

    if (index1 == -1 || index2 == -1) {
        return {};
    }

    vector<string> result;
    for (int i = 0; i < planets.size(); i++) {
        if (i > index1 && i < index2) {
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

    vector<string> res = bf(planet1, planet2);
    if (res.empty()) {
        cout << "Invalid input. Please enter correct planet names." << endl;
    } else {
        cout << "The planets between " << planet1 << " and " << planet2 << " are: ";
        for (const auto& p : res) {
            cout << p << " ";
        }
        cout << endl;
    }

    return 0;
}