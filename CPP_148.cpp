#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
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

    for (int i = 0; i < index1; i++) {
        result.push_back(planets[i]);
    }

    for (int i = index1 + 1; i <= index2; i++) {
        result.push_back(planets[i]);
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

    if (result.empty()) {
        cout << "Invalid planet names." << endl;
    }
    else {
        cout << "Planets between " << planet1 << " and " << planet2 << ": ";
        for (string s : result) {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}