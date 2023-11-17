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
	map<string, int> num_map;
	num_map["zero"] = 0;
	num_map["one"] = 1;
	num_map["two"] = 2;
	num_map["three"] = 3;
	num_map["four"] = 4;
	num_map["five"] = 5;
	num_map["six"] = 6;
	num_map["seven"] = 7;
	num_map["eight"] = 8;
	num_map["nine"] = 9;
	int num_array[10];
	int i = 0;
	int j = 0;
	int k = 0;
	int temp = 0;
	string result = "";
	string temp_str = "";
	while(numbers[i] != '\0'){
		if(numbers[i] == ' '){
			num_array[j] = num_map[temp_str];
			temp_str = "";
			j++;
		}
		else{
			temp_str += numbers[i];
		}
		i++;
	}
	num_array[j] = num_map[temp_str];
	for(i = 0; i < j; i++){
		for(k = i + 1; k <= j; k++){
			if(num_array[i] > num_array[k]){
				temp = num_array[i];
				num_array[i] = num_array[k];
				num_array[k] = temp;
			}
		}
	}
	for(i = 0; i <= j; i++){
		for(map<string, int>::iterator it = num_map.begin(); it != num_map.end(); it++){
			if(it->second == num_array[i]){
				result += it->first;
				result += " ";
				break;
			}
		}
	}
	result.erase(result.end() - 1);
	return result;
}
int main(){
	string numbers = "three one five";
	string result = sort_numbers(numbers);
	printf("%s\n", result.c_str());
	return 0;
}
