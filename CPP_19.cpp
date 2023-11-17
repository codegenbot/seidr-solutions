/*
Input is a space-delimited string of numberals from "zero" to "nine".
Valid choices are "zero", "one", 'two", 'three", "four", "five", 'six", 'seven", "eight" and "nine".
Return the string with numbers sorted from smallest to largest
>>> sort_numbers('three one five")
"one three five"
*/
#include<stdio.h>
#include<string.h>
#include<map>
#include<vector>
#include<algorithm>
#include<sstream>
#include <cassert>
using namespace std;
string sort_numbers(string numbers){//error: ‘string’ does not name a type; did you mean ‘stdin’?
	map<string, int> num_map;
	num_map["zero"] = 0;
	num_map["one"] = 1;
	num_map["two"] = 2;
	num_map["three"] = 3;
	num_map["four"] = 4;
	num_map["five"] = 5;
	num_map["six"] = 6;
	num_map["seven"] = 7;
	num_map["eight"] = 8;
	num_map["nine"] = 9;
	vector<int> nums;
	stringstream ss(numbers);//error: ‘stringstream’ was not declared in this scope
	string num;
	while(ss >> num){
		nums.push_back(num_map[num]);//error: ‘nums’ was not declared in this scope; did you mean ‘num’?
	}
	sort(nums.begin(), nums.end());
	string res;
	for(int i = 0; i < nums.size(); i++){
		res += to_string(nums[i]) + " ";
	}
	return res;
}
int main1(){
	assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
	return 0;
}
