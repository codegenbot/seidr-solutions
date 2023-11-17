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
    string num_str = "";
    int i = 0;
    int len = numbers.size();
    while(i < len){
        string str = "";
        while(numbers[i] != ' ' && i < len){
            str += numbers[i];
            i++;
        }
        num_str += to_string(num_map[str]);
        num_str += " ";
        i++;
    }
    return num_str;
}
