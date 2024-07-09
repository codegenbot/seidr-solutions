#include <iostream>
#include <vector>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1)
        return {};
    
    vector<string> result;
    for (int i = 0; i < planets.size(); i++) {
        if (i > index1 && i < index2) {
            result.push_back(planets[i]);
        }
    }
    
    return result;

}

int main() {
    cout << "Enter two planets separated by space: ";
    string planet1, planet2;
    cin >> planet1 >> planet2;
    vector<string> result = bf(planet1, planet2);
    if (result.empty()) {
        cout << "Planets not found.\n";
    } else {
        cout << "Planets in order are: ";
        for (const string& planet : result) {
            cout << planet << " ";
        }
        cout << "\n";
    }
    return 0;
}