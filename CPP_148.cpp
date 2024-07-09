#include <vector>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    int distance1 = -1;
    int distance2 = -1;
    double mercuryDistance = 57.9, venusDistance = 67.2, earthDistance = 0, marsDistance = 225, jupiterDistance = 778, saturnDistance = 1433, uranusDistance = 2870, neptuneDistance = 4495;

    if (planet1 == "Mercury") {
        distance1 = mercuryDistance;
    }
    else if (planet1 == "Venus") {
        distance1 = venusDistance;
    }
    else if (planet1 == "Earth") {
        distance1 = earthDistance;
    }
    else if (planet1 == "Mars") {
        distance1 = marsDistance;
    }
    else if (planet1 == "Jupiter") {
        distance1 = jupiterDistance;
    }
    else if (planet1 == "Saturn") {
        distance1 = saturnDistance;
    }
    else if (planet1 == "Uranus") {
        distance1 = uranusDistance;
    }
    else if (planet1 == "Neptune") {
        distance1 = neptuneDistance;
    }

    if (planet2 == "Mercury") {
        distance2 = mercuryDistance;
    }
    else if (planet2 == "Venus") {
        distance2 = venusDistance;
    }
    else if (planet2 == "Earth") {
        distance2 = earthDistance;
    }
    else if (planet2 == "Mars") {
        distance2 = marsDistance;
    }
    else if (planet2 == "Jupiter") {
        distance2 = jupiterDistance;
    }
    else if (planet2 == "Saturn") {
        distance2 = saturnDistance;
    }
    else if (planet2 == "Uranus") {
        distance2 = uranusDistance;
    }
    else if (planet2 == "Neptune") {
        distance2 = neptuneDistance;
    }

    if (distance1 != -1 && distance2 != -1) {
        result.push_back((distance1 < distance2 ? planet1 : planet2));
    }

    return result;
}