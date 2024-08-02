#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    map<string, int> planetOrder = {{"Mercury", 0}, {"Venus", 1}, {"Earth", 2}, {"Mars", 3},
                                    {"Jupiter", 4}, {"Saturn", 5}, {"Uranus", 6}, {"Neptune", 7}};
    
    if (planetOrder.find(planet1) == planetOrder.end() || planetOrder.find(planet2) == planetOrder.end()) {
        return result;
    }
    
    int index1 = planetOrder[planet1];
    int index2 = planetOrder[planet2];
    
    for (int i = 0; i < 8; i++) {
        if (i >= index1 && i <= index2) {
            continue;
        } else if (i < index1) {
            result.push_back(planetOrder.begin()->first);
        } else if (i > index2) {
            result.push_back("Neptune");
        } else if (index1 < i && i < index2) {
            result.push_back(planetOrder.find(planet1)->second == 7 ? "Neptune" : planetOrder.find(planet1)->first);
        }
    }
    
    return result;
}