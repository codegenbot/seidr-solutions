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
	vector<string> solar_system = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
	vector<string> result;
	int first = -1;
	int second = -1;
	for(int i = 0;i < solar_system.size();i++){
		if(solar_system[i] == planet1){
			first = i;
		}
		if(solar_system[i] == planet2){
			second = i;
		}
	}
	if(first == -1 || second == -1){
		return result;
	}
	if(first > second){
		int tmp = first;
		first = second;
		second = tmp;
	}
	for(int i = first + 1;i < second;i++){
		result.push_back(solar_system[i]);
	}
	return result;
}
int main(){
	vector<string> result = bf("Mercury", "Uranus");
	for(int i = 0;i < result.size();i++){
		printf("%s ",result[i].c_str());
	}
	return 0;
}
