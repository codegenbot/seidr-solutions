```cpp
#include <vector>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    
    int distance1 = -1;
    int distance2 = -1;

    if (planet1 == "Makemake" || planet2 == "Makemake") 
        return vector<string>();

    if (planet1 == "Mercury") {
        distance1 = 57.9;
    }
    else if (planet1 == "Venus") {
        distance1 = 67.2;
    }
    else if (planet1 == "Earth") {
        distance1 = 0;
    }
    else if (planet1 == "Mars") {
        distance1 = 225;
    }
    else if (planet1 == "Jupiter") {
        distance1 = 778;
    }
    else if (planet1 == "Saturn") {
        distance1 = 1433;
    }
    else if (planet1 == "Uranus") {
        distance1 = 2870;
    }
    else if (planet1 == "Neptune") {
        distance1 = 4495;
    }

    if (planet2 == "Mercury") {
        distance2 = 57.9;
    }
    else if (planet2 == "Venus") {
        distance2 = 67.2;
    }
    else if (planet2 == "Earth") {
        distance2 = 0;
    }
    else if (planet2 == "Mars") {
        distance2 = 225;
    }
    else if (planet2 == "Jupiter") {
        distance2 = 778;
    }
    else if (planet2 == "Saturn") {
        distance2 = 1433;
    }
    else if (planet2 == "Uranus") {
        distance2 = 2870;
    }
    else if (planet2 == "Neptune") {
        distance2 = 4495;
    }

    if (distance1 != -1 && distance2 != -1) {
        result.push_back((distance1 < distance2 ? planet1 : planet2));
    }

    return result;
}