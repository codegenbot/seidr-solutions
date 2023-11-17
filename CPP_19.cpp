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
	map<string, int> number_map;
	number_map["zero"] = 0;
	number_map["one"] = 1;
	number_map["two"] = 2;
	number_map["three"] = 3;
	number_map["four"] = 4;
	number_map["five"] = 5;
	number_map["six"] = 6;
	number_map["seven"] = 7;
	number_map["eight"] = 8;
	number_map["nine"] = 9;
	string result = "";
	vector<int> nums;
	stringstream ss(numbers);
	string temp;
	while(ss >> temp){
		nums.push_back(number_map[temp]);
	}
	sort(nums.begin(), nums.end());
	for(int i = 0; i < nums.size(); i++){
		if(i != 0) result += " ";
		switch(nums[i]){
			case 0:
				result += "zero";
				break;
			case 1:
				result += "one";
				break;
			case 2:
				result += "two";
				break;
			case 3:
				result += "three";
				break;
			case 4:
				result += "four";
				break;
			case 5:
				result += "five";
				break;
			case 6:
				result += "six";
				break;
			case 7:
				result += "seven";
				break;
			case 8:
				result += "eight";
				break;
			case 9:
				result += "nine";
				break;
		}
	}
	return result;
}
