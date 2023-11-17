/*
Input is a space-delimited string of numberals from "zero" to "nine".
Valid choices are "zero", "one", 'two", 'three", "four", "five", 'six", 'seven", "eight" and "nine".
Return the string with numbers sorted from smallest to largest
>>> sort_numbers('three one five")
"one three five"
*/
#include<stdio.h>
#include<string.h>
#include<map>
#include <vector>
using namespace std;
string sort_numbers(string numbers){
    map<string, int> nums;
    nums["zero"] = 0;
    nums["one"] = 1;
    nums["two"] = 2;
    nums["three"] = 3;
    nums["four"] = 4;
    nums["five"] = 5;
    nums["six"] = 6;
    nums["seven"] = 7;
    nums["eight"] = 8;
    nums["nine"] = 9;
    stringstream ss(numbers);
    vector<int> num_list;
    string num;
    while(ss >> num){
        num_list.push_back(nums[num]);
    }
    sort(num_list.begin(), num_list.end());
    string ans;
    for(int i = 0; i < num_list.size(); i++){
        for(auto it : nums){
            if(it.second == num_list[i]){
                ans += it.first + " ";
                break;
            }
        }
    }
    ans.pop_back();
    return ans;
}
