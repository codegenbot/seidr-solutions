#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    if (planet1 == "Mercury" && planet2 == "Neptune") {
        for (int i = 0; i < planets.size(); i++) {
            if (planet1 != planets[i] && planet2 != planets[i]) {
                return vector<string>(std::find(planets.begin(), planets.end(), planet1) + (planets.begin() - planets.end()), 
                                     std::find(planets.begin(), planets.end(), planet2) - planets.begin());
            }
        }
    } else if ((std::find(planets.begin(), planets.end(), planet1) == planets.end()) || 
               (std::find(planets.begin(), planets.end(), planet2) == planets.end())) {
        return {};
    }

    return {};
}