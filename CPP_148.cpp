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
#include<algorithm>
using namespace std;
vector<string> bf(string planet1,string planet2){
	vector<string> planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
	vector<string> result;
	int i = 0;
	int j = 0;
	int k = 0;
	for(i = 0; i < 8; i++){
		if(planets[i] == planet1){
			break;
		}
	}
	for(j = 0; j < 8; j++){
		if(planets[j] == planet2){
			break;
		}
	}
	if(i >= j){
		for(k = i + 1; k < 8; k++){
			result.push_back(planets[k]);
		}
		for(k = 0; k < j; k++){
			result.push_back(planets[k]);
		}
	}else{
		for(k = i + 1; k <= j; k++){
			result.push_back(planets[k]);
		}
	}
	return result;
}
int main(){
	vector<string> result = bf("Jupiter", "Neptune");
	for(int i = 0; i < result.size(); i++){
		printf("%s\n", result[i].c_str());
	}
	return 0;
}
