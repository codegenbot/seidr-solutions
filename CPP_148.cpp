#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    
    bool found1 = false;
    bool found2 = false;
    
    for (string planet : planets) {
        if (planet == planet1) {
            found1 = true;
        }
        
        if (found1 && !found2) {
            result.push_back(planet);
        }
        
        if (planet == planet2) {
            found2 = true;
        }
    }
    
    if (!found1 || !found2) {
        result.clear();
    }
    
    return result;
}