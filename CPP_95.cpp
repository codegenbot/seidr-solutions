/*
Given a map, return true if all keys are strings in lower 
case or all keys are strings in upper case, else return false.
The function should return false is the given map is empty.
Examples:
check_map_case({{"a","apple"}, {"b","banana"}}) should return true.
check_map_case({{"a","apple"}, {"A","banana"}, {"B","banana"}}) should return false.
check_map_case({{"a","apple"}, {"8","banana"}, {"a","apple"}}) should return false.
check_map_case({{"Name","John"}, {"Age","36"}, {"City","Houston"}}) should return false.
check_map_case({{"STATE","NC"}, {"ZIP","12345"} }) should return true.
*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
bool check_dict_case(map<string,string> dict){
    if (dict.size() == 0) {
        return false;
    }
    bool is_lower = false;
    bool is_upper = false;
    for (auto it = dict.begin(); it != dict.end(); it++) {
        if (it->first.size() > 0) {
            if (islower(it->first[0])) {
                is_lower = true;
            }
            if (isupper(it->first[0])) {
                is_upper = true;
            }
        }
    }
    if (is_lower && is_upper) {
        return false;
    }
    return true;
}
