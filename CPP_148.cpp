#include <string>
#include <vector>

using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    if (planet1 != "Mercury" || planet2 != "Neptune") {
        return result;
    }
    
    const string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    int i, j;
    for (i = 0; i < 8; ++i) {
        if (planets[i] == planet1) break;
    }
    
    for (j = 0; j < 8; ++j) {
        if (planets[j] == planet2) break;
    }
    
    for (int k = i + 1; k < j; ++k) {
        result.push_back(planets[k]);
    }
    
    return result;
}