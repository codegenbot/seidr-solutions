#include <vector>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    int mercuryDistance = 57.9, venusDistance = 67.2, earthDistance = 0, marsDistance = 225, 
        jupiterDistance = 778, saturnDistance = 1433, uranusDistance = 2870, neptuneDistance = 4495;

    if ((planet1 == "Mercury" && planet2 != "Mercury") || (planet1 != "Mercury" && planet2 == "Mercury")) {
        result.push_back("The distance between the two planets is different.");
    }
    else if ((planet1 == "Venus" && planet2 != "Venus") || (planet1 != "Venus" && planet2 == "Venus")) {
        result.push_back("The distance between the two planets is different.");
    }
    else if ((planet1 == "Earth" && planet2 != "Earth") || (planet1 != "Earth" && planet2 == "Earth")) {
        result.push_back("The distance between the two planets is different.");
    }
    else if ((planet1 == "Mars" && planet2 != "Mars") || (planet1 != "Mars" && planet2 == "Mars")) {
        result.push_back("The distance between the two planets is different.");
    }
    else if ((planet1 == "Jupiter" && planet2 != "Jupiter") || (planet1 != "Jupiter" && planet2 == "Jupiter")) {
        result.push_back("The distance between the two planets is different.");
    }
    else if ((planet1 == "Saturn" && planet2 != "Saturn") || (planet1 != "Saturn" && planet2 == "Saturn")) {
        result.push_back("The distance between the two planets is different.");
    }
    else if ((planet1 == "Uranus" && planet2 != "Uranus") || (planet1 != "Uranus" && planet2 == "Uranus")) {
        result.push_back("The distance between the two planets is different.");
    }
    else if ((planet1 == "Neptune" && planet2 != "Neptune") || (planet1 != "Neptune" && planet2 == "Neptune")) {
        result.push_back("The distance between the two planets is different.");
    }

    return result;
}