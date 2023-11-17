/*
Create a function which takes a string representing a file's name, and returns
"Yes" if the the file's name is valid, and returns "No" otherwise.
A file's name is considered to be valid if and only if all the following conditions 
are met:
- There should not be more than three digits ('0'-'9') in the file's name.
- The file's name contains exactly one dot "."
- The substring before the dot should not be empty, and it starts with a letter from 
the latin alphapet ('a'-'z' and 'A'-'Z').
- The substring after the dot should be one of these: {'txt", "exe", "dll"}
Examples:
file_name_check("example.txt") => "Yes"
file_name_check("1example.dll")  => "No" // (the name should start with a latin alphapet letter)
*/
#include<stdio.h>
#include<string>
using namespace std;
string file_name_check(string file_name){
	int dot_pos = file_name.find('.');
	string sub_string_before_dot = file_name.substr(0,dot_pos);
	string sub_string_after_dot = file_name.substr(dot_pos+1);
	int count_of_digits = 0;
	for(int i=0;i<sub_string_before_dot.length();i++){
		if(sub_string_before_dot[i]>='0'&&sub_string_before_dot[i]<='9'){
			count_of_digits++;
		}
	}
	if(count_of_digits>3){
		return "No";
	}
	if(sub_string_before_dot.length()==0){
		return "No";
	}
	if(sub_string_after_dot=="txt"||sub_string_after_dot=="exe"||sub_string_after_dot=="dll"){
		return "Yes";
	}
	return "No";
}
