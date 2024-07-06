#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    if (planet1 != planet2 && find(planets.begin(), planets.end(), planet1) != planets.end() && 
        find(planets.begin(), planets.end(), planet2) != planets.end()) {
        
        int index1 = distance(planets.begin(), find(planets.begin(), planets.end(), planet1));
        int index2 = distance(planets.begin(), find(planets.begin(), planets.end(), planet2));

        if (index1 < index2) {
            return vector<string>(planets.begin() + index1 + 1, planets.begin() + index2);
        } else if (index1 > index2) {
            return vector<string>(planets.begin() + index1, planets.end());
        } else {
            return vector<string>(planets.begin(), plan