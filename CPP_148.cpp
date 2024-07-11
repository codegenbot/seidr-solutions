#include <map>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    map<string, int> planets = {{"Mercury", 0}, {"Venus", 1}, {"Earth", 2}, {"Mars", 3},
                                 {"Jupiter", 4}, {"Saturn", 5}, {"Uranus", 6}, {"Neptune", 7}};

    if (planets.find(planet1) == planets.end() || planets.find(planet2) == planets.end()) {
        return {};
    }

    int index1 = planets[planet1];
    int index2 = planets[planet2];

    vector<string> result;
    for (auto it = planets.begin(); it != planets.end(); ++it) {
        if (index1 < it->second && it->second <= index2) {
            result.push_back(it->first);
        }
    }

    return result;
}