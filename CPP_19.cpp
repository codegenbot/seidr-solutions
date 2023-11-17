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
	map<string, int> num;
	num["zero"] = 0;
	num["one"] = 1;
	num["two"] = 2;
	num["three"] = 3;
	num["four"] = 4;
	num["five"] = 5;
	num["six"] = 6;
	num["seven"] = 7;
	num["eight"] = 8;
	num["nine"] = 9;
	stringstream ss(numbers);
	string temp;
	vector<int> nums;
	while(ss >> temp){
		nums.push_back(num[temp]);
	}
	sort(nums.begin(), nums.end());
	string result;
	for(int i = 0; i < nums.size(); i++){
		for(auto it = num.begin(); it != num.end(); it++){
			if(it->second == nums[i]){
				result += it->first;
				result += " ";
				break;
			}
		}
	}
	result.pop_back();
	return result;
}
