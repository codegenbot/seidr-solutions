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
	map<string, int> nums;
	nums["zero"] = 0;
	nums["one"] = 1;
	nums["two"] = 2;
	nums["three"] = 3;
	nums["four"] = 4;
	nums["five"] = 5;
	nums["six"] = 6;
	nums["seven"] = 7;
	nums["eight"] = 8;
	nums["nine"] = 9;
	stringstream ss(numbers);
	string temp;
	vector<int> nums_int;
	while(ss >> temp){
		nums_int.push_back(nums[temp]);
	}
	sort(nums_int.begin(), nums_int.end());
	string res = "";
	for(int i = 0; i < nums_int.size(); i++){
		for(auto it = nums.begin(); it != nums.end(); it++){
			if(it->second == nums_int[i]){
				res += it->first + " ";
			}
		}
	}
	res.pop_back();
	return res;
}
