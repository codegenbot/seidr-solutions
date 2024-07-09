#include <vector>
#include <string>
using namespace std;

vector<string> bf(vector<string> planets) {
    vector<string> result;
    
    int mercury = 57.9, venus = 67.2, earth = 0, mars = 225, 
        jupiter = 778, saturn = 1433, uranus = 2870, neptune = 4495;

    for(int i=0; i < planets.size(); i++){
        if(planets[i] == "Mercury" || planets[i] == "Venus" || planets[i] == "Earth" || 
           planets[i] == "Mars" || planets[i] == "Jupiter" || planets[i] == "Saturn" || 
           planets[i] == "Uranus" || planets[i] == "Neptune") {
            result.push_back(planets[i]);
        }
    }

    return result;
}