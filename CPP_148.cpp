#include <vector>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < planets.size(); i++) {
        if (planets[i] == planet1) {
            index1 = i;
        }
        else if (planets[i] == planet2) {
            index2 = i;
        }

        if (index1 != -1 && index2 != -1)
            break;
    }

    if (index1 == -1 || index2 == -1) {
        return result;
    }

    int dist = abs(index1 - index2);

    if(dist > 3) {
        string temp = planet1;
        planet1 = planet2;
        planet2 = temp;

        dist = abs(index1 - index2);
    }
    
    for (int i = 0; i < planets.size(); i++) {
        int j = (i + dist) % planets.size();
        
        if ((index1 <= index2 && i >= index1 && i <= index2) || 
            (index1 > index2 && (i >= index1 && i < index2) || i >= 0 && i <= index2 - index1)) {
            result.push_back(planets[i]);
        }
    }

    sort(result.begin(), result.end());

    return result;
}