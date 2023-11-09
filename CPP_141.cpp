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
	int count = 0;
	int dot = 0;
	int len = file_name.length();
	for (int i = 0; i < len; i++) {
		if (file_name[i] >= '0' && file_name[i] <= '9') {
			count++;
		}
		if (file_name[i] == '.') {
			dot = i;
		}
	}
	if (count > 3) {
		return "No";
	}
	else {
		if (dot == 0 || dot == len - 1) {
			return "No";
		}
		else {
			string str1 = file_name.substr(0, dot);
			string str2 = file_name.substr(dot + 1, len - dot - 1);
			int len1 = str1.length();
			int len2 = str2.length();
			if (len1 == 0) {
				return "No";
			}
			else {
				if (len2 != 3) {
					return "No";
				}
				else {
					if ((str2 != "txt") && (str2 != "exe") && (str2 != "dll")) {
						return "No";
					}
					else {
						if (str1[0] >= 'a' && str1[0] <= 'z' || str1[0] >= 'A' && str1[0] <= 'Z') {
							return "Yes";
						}
						else {
							return "No";
						}
					}
				}
			}
		}
	}
}
