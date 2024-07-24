```cpp
#include <assert.h>
#include <vector>
#include <string>

bool issame(string a, string b) {
    return a == b;
}

std::vector<string> bf(string planet1, string planet2) {
    std::vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
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
        if ((i > index1 && i < index2) || (i > index2 && i < index1)) {
            result.push_back(planets[i]);
        }
    }
    
    return result;
}

int main() {
    assert(issame("Earth", "Earth"));  
    string planet1, planet2;
    cout << "Enter the first planet: ";
    cin >> planet1;
    cout << "Enter the second planet: ";
    cin >> planet2;
    vector<string> result = bf(planet1, planet2);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}