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
	int i, j, k, l, m, n;
	int size = file_name.length();
	char a[size];
	strcpy(a, file_name.c_str());
	for (i = 0; i < size; i++) {
		if (a[i] == '.')
			break;
	}
	if (i == size)
		return "No";
	for (j = 0; j < i; j++) {
		if (a[j] == '0' || a[j] == '1' || a[j] == '2' || a[j] == '3' || a[j] == '4' || a[j] == '5' || a[j] == '6' || a[j] == '7' || a[j] == '8' || a[j] == '9')
			break;
	}
	if (j == i)
		return "No";
	for (k = i + 1; k < size; k++) {
		if (a[k] == '0' || a[k] == '1' || a[k] == '2' || a[k] == '3' || a[k] == '4' || a[k] == '5' || a[k] == '6' || a[k] == '7' || a[k] == '8' || a[k] == '9')
			break;
	}
	if (k == size)
		return "No";
	for (l = k + 1; l < size; l++) {
		if (a[l] == '0' || a[l] == '1' || a[l] == '2' || a[l] == '3' || a[l] == '4' || a[l] == '5' || a[l] == '6' || a[l] == '7' || a[l] == '8' || a[l] == '9')
			break;
	}
	if (l == size)
		return "No";
	for (m = l + 1; m < size; m++) {
		if (a[m] == '0' || a[m] == '1' || a[m] == '2' || a[m] == '3' || a[m] == '4' || a[m] == '5' || a[m] == '6' || a[m] == '7' || a[m] == '8' || a[m] == '9')
			break;
	}
	if (m == size)
		return "No";
	for (n = m + 1; n < size; n++) {
		if (a[n] == '0' || a[n] == '1' || a[n] == '2' || a[n] == '3' || a[n] == '4' || a[n] == '5' || a[n] == '6' || a[n] == '7' || a[n] == '8' || a[n] == '9')
			break;
	}
	if (n == size)
		return "No";
	else
		return "Yes";
}
