#include <vector>
#include <algorithm>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    int mercury = 57.9, venus = 67.2, earth = 0, mars = 225, 
        jupiter = 778, saturn = 1433, uranus = 2870, neptune = 4495;

    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    sort({planet1, planet2});
    
    if (planet1 != "Mercury" && planet2 != "Mercury") {
        result.push_back(planet1);
        result.push_back(planet2);
    }
    else if ((planet1 == "Mercury" || planet2 == "Mercury")) {
        if (planet1 == "Mercury")
            result.push_back(planet1);
        else
            result.push_back(planet2);
    }
    
    return result;
}