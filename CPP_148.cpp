#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    int index1 = -1, index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        else if (planets[i] == planet2) {
            index2 = i;
        }

        if (index1 != -1 && index2 != -1)
            break;
    }

    if (index1 == -1 || index2 == -1)
        return result;

    for (int i = 0; i < planets.size(); i++) {
        if (i >= index1 && i <= index2) {
            result.push_back(planets[i]);
        }
    }

    sort(result.begin(), result.end());

    return result;
}

int main() {
    string planet1, planet2;

    cout << "Enter the first planet: ";
    cin >> planet1;
    cout << "Enter the second planet: ";
    cin >> planet2;

    vector<string> result = bf(planet1, planet2);

    if (result.size() > 0) {
        cout << "Planets between " << planet1 << " and " << planet2 << ": ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    } else
        cout << "Invalid planets" << endl;

    return 0;
}