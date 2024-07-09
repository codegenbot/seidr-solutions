```cpp
#include <vector>
#include <string>
using namespace std;

vector<string> bf(vector<string> planets) {
    vector<string> result;
    
    int mercury = 57.9, venus = 67.2, earth = 0, mars = 225, 
        jupiter = 778, saturn = 1433, uranus = 2870, neptune = 4495;

    for(int i=0; i < planets.size(); i++){
        if(planets[i] == "Mercury" && (i==planets.size()-1 || find(planets.begin(), planets.end(), "Venus") != planets.end() || 
            find(planets.begin(), planets.end(), "Earth") != planets.end() || 
            find(planets.begin(), planets.end(), "Mars") != planets.end() || 
            find(planets.begin(), planets.end(), "Jupiter") != planets.end() || 
            find(planets.begin(), planets.end(), "Saturn") != planets.end() || 
            find(planets.begin(), planets.end(), "Uranus") != planets.end() || 
            find(planets.begin(), planets.end(), "Neptune") != planets.end())) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Venus" && (i==planets.size()-1 || find(planets.begin(), planets.end(), "Earth") != planets.end() || 
            find(planets.begin(), planets.end(), "Mars") != planets.end() || 
            find(planets.begin(), planets.end(), "Jupiter") != planets.end() || 
            find(planets.begin(), planets.end(), "Saturn") != planets.end() || 
            find(planets.begin(), planets.end(), "Uranus") != planets.end() || 
            find(planets.begin(), planets.end(), "Neptune") != planets.end())) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Earth" && (i==planets.size()-1 || find(planets.begin(), planets.end(), "Mars") != planets.end() || 
            find(planets.begin(), planets.end(), "Jupiter") != planets.end() || 
            find(planets.begin(), planets.end(), "Saturn") != planets.end() || 
            find(planets.begin(), planets.end(), "Uranus") != planets.end() || 
            find(planets.begin(), planets.end(), "Neptune") != planets.end())) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Mars" && (i==planets.size()-1 || find(planets.begin(), planets.end(), "Jupiter") != planets.end() || 
            find(planets.begin(), planets.end(), "Saturn") != planets.end() || 
            find(planets.begin(), planets.end(), "Uranus") != planets.end() || 
            find(planets.begin(), planets.end(), "Neptune") != planets.end())) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Jupiter" && (i==planets.size()-1 || find(planets.begin(), planets.end(), "Saturn") != planets.end() || 
            find(planets.begin(), planets.end(), "Uranus") != planets.end() || 
            find(planets.begin(), planets.end(), "Neptune") != planets.end())) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Saturn" && (i==planets.size()-1 || find(planets.begin(), planets.end(), "Uranus") != planets.end() || 
            find(planets.begin(), planets.end(), "Neptune") != planets.end())) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Uranus" && (i==planets.size()-1 || find(planets.begin(), planets.end(), "Neptune") != planets.end())) {
            result.push_back(planets[i]);
        }
        else if(planets[i] == "Neptune" && (i==planets.size()-1)) {
            result.push_back(planets[i]);
        }
    }

    return result;
}