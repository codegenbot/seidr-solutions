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

	vector<string> answer;

	bool flag1 = false, flag2 = false;

	int index1, index2;

	for (int i = 0; i < planets.size(); i++){

		if (planets[i] == planet1){

			flag1 = true;

			index1 = i;

		}

		if (planets[i] == planet2){

			flag2 = true;

			index2 = i;

		}

	}

	if (!flag1 || !flag2)

		return answer;

	if (index1 > index2){

		int temp = index1;

		index1 = index2;

		index2 = temp;

	}

	for (int i = index1 + 1; i < index2; i++)

		answer.push_back(planets[i]);

	return answer;

}

int main(){

	vector<string> answer = bf("Jupiter", "Neptune");

	for (int i = 0; i < answer.size(); i++)

		printf("%s ", answer[i].c_str());

	printf("\n");

	answer = bf("Earth", "Mercury");

	for (int i = 0; i < answer.size(); i++)

		printf("%s ", answer[i].c_str());

	printf("\n");

	answer = bf("Mercury", "Uranus");

	for (int i = 0; i < answer.size(); i++)

		printf("%s ", answer[i].c_str());

	printf("\n");

	return 0;

}
