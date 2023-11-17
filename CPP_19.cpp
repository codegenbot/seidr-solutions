/*
Input is a space-delimited string of numberals from "zero" to "nine".
Valid choices are "zero", "one", 'two", 'three", "four", "five", 'six", 'seven", "eight" and "nine".
Return the string with numbers sorted from smallest to largest
>>> sort_numbers('three one five")
"one three five"
*/
#include <stdio.h>
#include <string>
#include <map>
#include <iostream>
#include <ostream>
#include <algorithm>
#include <sstream>
#include <vector>
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
    vector<int> nums;
    stringstream ss(numbers);
    string word;
    while(ss >> word){
        nums.push_back(num_map[word]);
    }
    sort(nums.begin(), nums.end());
    map<int, string> map_num;
    map_num[0] = "zero";
    map_num[1] = "one";
    map_num[2] = "two";
    map_num[3] = "three";
    map_num[4] = "four";
    map_num[5] = "five";
    map_num[6] = "six";
    map_num[7] = "seven";
    map_num[8] = "eight";
    map_num[9] = "nine";
    string result = "";
    for(int i = 0; i < nums.size(); i++){
        result += map_num[nums[i]] + " ";
    }
    return result.substr(0, result.size()-1);
}

int main(){
    string numbers = "three one five";
    cout << sort_numbers(numbers) << endl;
    return 0;
}
