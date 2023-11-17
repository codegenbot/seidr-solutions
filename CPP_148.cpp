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
	vector<string> result;
	vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", 
								"Saturn", "Uranus", "Neptune"};
	int p1 = 0,p2 = 0;
	for(int i = 0;i < planets.size();i++){
		if(planets[i] == planet1)
			p1 = i;
		if(planets[i] == planet2)
			p2 = i;
	}
	if(p1 == 0 || p2 == 0)
		return result;
	for(int i = p1+1;i < p2;i++){
		result.push_back(planets[i]);
	}
	return result;
}
int main(){
	string p1,p2;
	vector<string> result;
	cin >> p1 >> p2;
	result = bf(p1,p2);
	for(int i = 0;i < result.size();i++){
		cout << result[i] << endl;
	}
	return 0;
}
