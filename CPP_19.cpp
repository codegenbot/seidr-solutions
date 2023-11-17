/*
Input is a space-delimited string of numberals from "zero" to "nine".
Valid choices are "zero", "one", 'two", 'three", "four", "five", 'six", 'seven", "eight" and "nine".
Return the string with numbers sorted from smallest to largest
>>> sort_numbers('three one five")
"one three five"
*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
string sort_numbers(string numbers){
	map<string, int> numbers_map;
	numbers_map["zero"] = 0;
	numbers_map["one"] = 1;
	numbers_map["two"] = 2;
	numbers_map["three"] = 3;
	numbers_map["four"] = 4;
	numbers_map["five"] = 5;
	numbers_map["six"] = 6;
	numbers_map["seven"] = 7;
	numbers_map["eight"] = 8;
	numbers_map["nine"] = 9;
	vector<int> numbers_vector;
	stringstream ss(numbers);
	string temp;
	while(ss >> temp){
		numbers_vector.push_back(numbers_map[temp]);
	}
	sort(numbers_vector.begin(), numbers_vector.end());
	string result;
	for(int i = 0; i < numbers_vector.size(); i++){
		result += to_string(numbers_vector[i]) + " ";
	}
	return result;
}
