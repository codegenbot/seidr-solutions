#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

vector<string> bf(string planet1, string planet2);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> bf(string planet1, string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;

    int start = -1, end = -1;
    for(int i=0; i<planets.size(); i++){
        if(planets[i] == planet1) start = i;
        if(planets[i] == planet2) end = i;
    }

    if(start == -1 || end == -1) return {};

    if(start < end){
        for(int i=start+1; i<end; i++){
            result.push_back(planets[i]);
        }
    } else {
        for(int i=start-1; i>end; i--){
            result.push_back(planets[i]);
        }
    }

    return result;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
}