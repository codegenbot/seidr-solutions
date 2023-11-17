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
#include <vector>
using namespace std;
string sort_numbers(string numbers){
	string result="";
	map<string,int> num_map;
	num_map["zero"]=0;
	num_map["one"]=1;
	num_map["two"]=2;
	num_map["three"]=3;
	num_map["four"]=4;
	num_map["five"]=5;
	num_map["six"]=6;
	num_map["seven"]=7;
	num_map["eight"]=8;
	num_map["nine"]=9;
	vector<int> nums; // a vector of numbers
	int a=0;
	int b=0;
	for(int i=0;i<numbers.size();i++){
		if(numbers[i]==' '){
			nums.push_back(num_map[numbers.substr(a,i-a)]);
			a=i+1;
		}
	}
	nums.push_back(num_map[numbers.substr(a,numbers.size()-a)]);
	sort(nums.begin(),nums.end());
	for(int i=0;i<nums.size();i++){
		if(i!=0) result+=" ";
		switch(nums[i]){
			case 0:
				result+="zero";
				break;
			case 1:
				result+="one";
				break;
			case 2:
				result+="two";
				break;
			case 3:
				result+="three";
				break;
			case 4:
				result+="four";
				break;
			case 5:
				result+="five";
				break;
			case 6:
				result+="six";
				break;
			case 7:
				result+="seven";
				break;
			case 8:
				result+="eight";
				break;
			case 9:
				result+="nine";
				break;
		}
	}
	return result;
}
