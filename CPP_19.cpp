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
	string word;
	vector<int> v;
	while(ss >> word){
		v.push_back(num[word]);
	}
	sort(v.begin(), v.end());
	string ret;
	for(auto i : v){
		ret = ret + to_string(i) + " ";
	}
	ret.pop_back();
	return ret;
}

int main(){
	string s = "three one five";
	cout << sort_numbers(s) << endl;
	return 0;
}
