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
	map<string,int> m;
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
	vector<int> v;
	stringstream ss(numbers);
	string temp;
	while(ss>>temp)
		v.push_back(m[temp]);
	sort(v.begin(),v.end());
	string result;
	for(int i = 0; i < v.size(); i++){
		result += to_string(v[i]);
		if(i != v.size()-1)
			result += " ";
	}
	return result;
}
int main(){
	string a = "three one five";
	cout<<sort_numbers(a)<<endl;
	return 0;
}
