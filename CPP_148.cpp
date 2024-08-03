```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    return a==b;
}

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

    vector<string> output = bf(planet1, planet2);
    
    if (issame(output,{"Earth"})) {
        cout << "The result is same as expected." << endl;
    } else {
        cout << "The result is different from expected." << endl;
    }
    
    return 0;
}