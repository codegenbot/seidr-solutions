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
	map<string, int> m;
	m["zero"] = 0;
	m["one"] = 1;
	m["two"] = 2;
	m["three"] = 3;
	m["four"] = 4;
	m["five"] = 5;
	m["six"] = 6;
	m["seven"] = 7;
	m["eight"] = 8;
	m["nine"] = 9;
	stringstream ss(numbers);
	string temp;
	vector<int> v;
	while(ss >> temp){
		v.push_back(m[temp]);
	}
	sort(v.begin(), v.end());
	string res;
	for(int i = 0; i < v.size(); i++){
		for(auto it = m.begin(); it != m.end(); it++){
			if(it->second == v[i]){
				res += it->first + " ";
				break;
			}
		}
	}
	return res.substr(0, res.size() - 1);
}
