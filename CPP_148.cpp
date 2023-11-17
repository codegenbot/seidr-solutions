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
	vector<string> res;
	string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
	int start,end;
	for(int i=0;i<8;i++){
		if(planets[i] == planet1) start = i;
		if(planets[i] == planet2) end = i;
	}
	if(start > end) swap(start,end);
	for(int i=start;i<end;i++) res.push_back(planets[i]);
	return res;
}
int main2(){
	vector<string> res;
	res = bf("Jupiter", "Neptune");
	for(int i=0;i<res.size();i++) printf("%s ",res[i].c_str());
	printf("\n");
	res = bf("Earth", "Mercury");
	for(int i=0;i<res.size();i++) printf("%s ",res[i].c_str());
	printf("\n");
	res = bf("Mercury", "Uranus");
	for(int i=0;i<res.size();i++) printf("%s ",res[i].c_str());
	printf("\n");
	return 0;
}
