#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> bf(string planet1, string planet2) {
    vector<std::string> planets;
    planets.push_back("Mercury");
    planets.push_back("Venus");
    planets.push_back("Earth");
    planets.push_back("Mars");
    planets.push_back("Jupiter");
    planets.push_back("Saturn");
    planets.push_back("Uranus");
    planets.push_back("Neptune");
    
    int index1 = -1, index2 = -1;
    
    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        } else if (planets[i] == planet2) {
            index2 = i;
        }
    }
    
    if (index1 == -1 || index2 == -1)
        return {};
    
    vector<std::string> result(result.begin() + min(index1, index2), result.begin() + max(index1, index2));
    
    return result;
}