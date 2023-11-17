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
	vector<int> num;
	stringstream ss(numbers);
	string temp;
	while(ss >> temp){
		num.push_back(nums[temp]);
	}
	sort(num.begin(), num.end());
	string result;
	for(int i = 0; i < num.size(); i++){
		if(i != 0){
			result += " ";
		}
		switch(num[i]){
			case 0: result += "zero"; break;
			case 1: result += "one"; break;
			case 2: result += "two"; break;
			case 3: result += "three"; break;
			case 4: result += "four"; break;
			case 5: result += "five"; break;
			case 6: result += "six"; break;
			case 7: result += "seven"; break;
			case 8: result += "eight"; break;
			case 9: result += "nine"; break;
		}
	}
	return result;
}
