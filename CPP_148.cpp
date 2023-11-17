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
vector<string> res;
int index1 = -1, index2 = -1;
for (int i = 0; i < planets.size(); i++) {
if (planets[i] == planet1)
index1 = i;
if (planets[i] == planet2)
index2 = i;
}
if (index1 == -1 || index2 == -1)
return res;
if (index1 < index2) {
for (int i = index1+1; i < index2; i++)
res.push_back(planets[i]);
}
else {
for (int i = index1-1; i > index2; i--)
res.push_back(planets[i]);
}
return res;
}
int main() {
vector<string> res = bf("Jupiter", "Neptune");
for (string s : res)
printf("%s ", s.c_str());
printf("\n");
res = bf("Earth", "Mercury");
for (string s : res)
printf("%s ", s.c_str());
printf("\n");
res = bf("Mercury", "Uranus");
for (string s : res)
printf("%s ", s.c_str());
printf("\n");
return 0;
}
