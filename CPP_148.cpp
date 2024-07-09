#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> v1,vector<string> v2) {
    if(v1.size() != v2.size())
        return false;
    for(int i = 0; i<v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    return true;
}

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

    string str = "Jupiter";
    string str2 = "Makemake";
    vector<string> vecStr = {str};
    vector<string> result2 = bf(vecStr);
    
    assert (issame(result, result2));
}