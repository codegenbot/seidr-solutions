#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int start = -1, end = -1;
    
    for (int i = 0; i < planets.size(); ++i) {
        if (planets[i] == planet1) {
            start = i;
        } else if (planets[i] == planet2) {
            end = i;
        }
    }
    
    if (start == -1 || end == -1) {
        return {}; // Return empty vector if planet names are incorrect
    }
    
    if (start > end) {
        swap(start, end);
    }
    
    for (int i = start + 1; i < end; ++i) {
        result.push_back(planets[i]);
    }
    
    return result;
}

int main() {
    string planet1, planet2;
    cin >> planet1 >> planet2;
    vector<string> result = bf(planet1, planet2);
    
    for (const auto& planet : result) {
        cout << planet << " ";
    }
    
    return 0;
}