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
	if (file_name.find('.') == -1) return "No";
	for (int i = 0; i < file_name.length(); i++){
		if (file_name[i] >= '0' && file_name[i] <= '9') count++;
	}
	if (count > 3) return "No";
	if (file_name.find('.') == -1) return "No";
	string sub1 = file_name.substr(0, file_name.find('.'));
	if (sub1.length() == 0) return "No";
	if (sub1[0] >= '0' && sub1[0] <= '9') return "No";
	string sub2 = file_name.substr(file_name.find('.') + 1, file_name.length() - file_name.find('.') - 1);
	if (sub2 != "txt" && sub2 != "exe" && sub2 != "dll") return "No";
	return "Yes";
}
int main(){
	printf("%s\n", file_name_check("example.txt").c_str());
	printf("%s\n", file_name_check("1example.dll").c_str());
	return 0;
}
