```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    if (planet1 != planet2 && find(planets.begin(), planets.end(), planet1) != planets.end() && 
        find(planets.begin(), planets.end(), planet2) != planets.end()) {
        
        auto it1 = find(planets.begin(), planets.end(), planet1);
        auto it2 = find(planets.begin(), planets.end(), planet2);

        int index1 = distance(planets.begin(), it1);
        int index2 = distance(planets.begin(), it2);

        if (index1 < index2) {
            vector<string> result;
            for (int i = index1 + 1; i < index2; i++) {
                result.push_back(planets[i]);
            }
            return result;
        } else if (index1 > index2) {
            vector<string> result;
            for (int i = index1; i > index2; i--) {
                result.push_back(planets[i - 1]);
            }
            return result;
        } else {
            vector<string> result;
            for (int i = 0; i < index1; i++) {
                result.push_back(planets[i]);
            }
            return result;
        }
    } else {
        return {};
    }
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
        for (string p : result) {
            cout << p << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid input" << endl;
    }
}