/*
Input is a space-delimited string of numberals from "zero" to "nine".
Valid choices are "zero", "one", 'two", 'three", "four", "five", 'six", 'seven", "eight" and "nine".
Return the string with numbers sorted from smallest to largest
>>> sort_numbers('three one five")
"one three five"
*/
#include<stdio.h>
#include<string>
#include<iostream>
#include<ostream>
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
	int i, j;
	int a[100];
	string b[100];
	int temp, n = 0;
	string s;
	for (i = 0; i < numbers.size(); i++){
		if (numbers[i] == ' '){
			a[n] = num[s];
			b[n] = s;
			s.clear();
			n++;
		}
		else{
			s += numbers[i];
		}
	}
	a[n] = num[s];
	b[n] = s;
	n++;
	for (i = 0; i < n - 1; i++){
		for (j = 0; j < n - 1 - i; j++){
			if (a[j] > a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				s = b[j];
				b[j] = b[j + 1];
				b[j + 1] = s;
			}
		}
	}
	string ans;
	for (i = 0; i < n; i++){
		ans += b[i];
		if (i != n - 1)
			ans += ' ';
	}
	return ans;
}
int main(){
	string s;
	getline(cin, s);
	cout << sort_numbers(s) << endl;
	return 0;
}
