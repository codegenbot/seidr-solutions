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
	map<string, int> numberMap;
	numberMap["zero"] = 0;
	numberMap["one"] = 1;
	numberMap["two"] = 2;
	numberMap["three"] = 3;
	numberMap["four"] = 4;
	numberMap["five"] = 5;
	numberMap["six"] = 6;
	numberMap["seven"] = 7;
	numberMap["eight"] = 8;
	numberMap["nine"] = 9;
	string result = "";
	int i = 0;
	while(numbers[i] != '\0'){
		string temp = "";
		while(numbers[i] != ' ' && numbers[i] != '\0'){
			temp += numbers[i];
			i++;
		}
		result.push_back(numberMap[temp]);
		i++;
	}
	sort(result.begin(), result.end());
	return result;
}
int main(){
	string numbers = "three one five";
	cout << sort_numbers(numbers) << endl;
	return 0;
}
