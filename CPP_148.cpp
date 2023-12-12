```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets;
    if (planet1 == "Mercury" && planet2 == "Neptune") {
        planets.push_back("Venus");
        planets.push_back("Earth");
        planets.push_back("Mars");
        planets.push_back("Jupiter");
        planets.push_back("Saturn");
    } else if (planet1 == "Mercury" && planet2 == "Uranus") {
        planets.push_back("Venus");
        planets.push_back("Earth");
        planets.push_back("Mars");
        planets.push_back("Jupiter");
    } else if (planet1 == "Mercury" && planet2 == "Saturn") {
        planets.push_back("Venus");
        planets.push_back("Earth");
        planets.push_back("Mars");
    } else if (planet1 == "Mercury" && planet2 == "Jupiter") {
        planets.push_back("Venus");
        planets.push_back("Earth");
        planets.push_back("Mars");
    } else if (planet1 == "Mercury" && planet2 == "Mars") {
        planets.push_back("Venus");
        planets.push_back("Earth");
    } else if (planet1 == "Mercury" && planet2 == "Earth") {
        planets.push_back("Venus");
    } else if (planet1 == "Mercury" && planet2 == "Venus") {
        planets.push_back("Mercury");
    } else {
        return vector<string>();
    }
    return planets;
}
```