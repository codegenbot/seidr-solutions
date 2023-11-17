/*
There are eight planets in our solar system: the closerst to the Sun 
is Mercury, the next one is Venus, then Earth, Mars, Jupiter, Saturn, 
Uranus, Neptune.
Write a function that takes two planet names as strings planet1 and planet2. 
The function should return a vector containing all planets whose orbits are 
located between the orbit of planet1 and the orbit of planet2, sorted by 
the proximity to the sun. 
The function should return an empty vector if planet1 or planet2
are not correct planet names. 
Examples
bf("Jupiter", "Neptune") ==> {"Saturn", "Uranus"}
bf("Earth", "Mercury") ==> {"Venus"}
bf("Mercury", "Uranus") ==> {"Venus", "Earth", "Mars", "Jupiter", "Saturn"}
*/

#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<string> bf(string planet1,string planet2){
    vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    vector<string> result;
    int pos1, pos2;
    for (int i = 0; i < planets.size(); i++){
        if (planets[i] == planet1){
            pos1 = i;
        }
        if (planets[i] == planet2){
            pos2 = i;
        }
    }
    if (pos1 > pos2){
        for (int i = pos2 + 1; i < pos1; i++){
            result.push_back(planets[i]);
        }
    }
    else{
        for (int i = pos1 + 1; i < pos2; i++){
            result.push_back(planets[i]);
        }
    }
    return result;
}

int main(){
    vector<string> result = bf("Mercury", "Uranus");
    for (int i = 0; i < result.size(); i++){
        printf("%s\n", result[i].c_str());
    }
}
