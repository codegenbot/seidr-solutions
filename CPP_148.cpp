#include <vector>
#include <string>
using namespace std;

vector<string> bf(vector<string> planets) {
    vector<string> result;
    
    int mercury = 57.9, venus = 67.2, earth = 0, mars = 225, 
        jupiter = 778, saturn = 1433, uranus = 2870, neptune = 4495;

    for(int i=0; i < planets.size(); i++){
        if(planets[i] == "Mercury" && (planets[i+1] != "Mercury" || i==planets.size()-1)) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Venus" && (planets[i+1] != "Venus" || i==planets.size()-1)) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Earth" && (planets[i+1] != "Earth" || i==planets.size()-1)) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Mars" && (planets[i+1] != "Mars" || i==planets.size()-1)) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Jupiter" && (planets[i+1] != "Jupiter" || i==planets.size()-1)) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Saturn" && (planets[i+1] != "Saturn" || i==planets.size()-1)) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Uranus" && (planets[i+1] != "Uranus" || i==planets.size()-1)) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Neptune" && (planets[i+1] != "Neptune" || i==planets.size()-1)) {
            result.push_back(planets[i]);
        }
    }

    return result;
}