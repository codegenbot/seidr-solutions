#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    if (std::find(planets.begin(), planets.end(), planet1) == planets.end() || 
        std::find(planets.begin(), planets.end(), planet2) == planets.end()) {
        return {};
    }
    
    int index1 = std::distance(planets.begin(), std::find(planets.begin(), planets.end(), planet1));
    int index2 = std::distance(planets.begin(), std::find(planets.begin(), planets.end(), planet2));
    
    if (index1 > index2) {
        swap(index1, index2);
    }
    
    vector<string> result;
    for (int i = 0; i < planets.size(); ++i) {
        if (i >= index1 && i <= index2) continue;
        if (i < index1) {
            result.push_back(planets[i]);
        } else {
            result.push_back(planets[i-1]);
            break;
        }
    }
    
    for (int i = planets.size() - 1; i > index2; --i) {
        if (i <= index1) continue;
        result.push_back(planets[i]);
    }
    
    return result;
}