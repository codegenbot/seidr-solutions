#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    map<string, int> planets = {{"Mercury", 0}, {"Venus", 1}, {"Earth", 2}, {"Mars", 3},
                                 {"Jupiter", 4}, {"Saturn", 5}, {"Uranus", 6}, {"Neptune", 7}};

    if (planets.find(planet1) == planets.end() || planets.find(planet2) == planets.end()) {
        return result;
    }

    int index1 = planets[planet1];
    int index2 = planets[planet2];

    for (int i = index1 + 1; i < index2; i++) {
        result.push_back(map<string, int>::iterator(planets.begin() + i)->first);
    }

    return result;
}