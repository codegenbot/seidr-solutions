#include<stdio.h>
#include<string>
#include<map>
#include<cctype>
using namespace std;

bool is_all_lower(const string &key) {
    for(char c : key) {
        if(!islower(c)) return false;
    }
    return true;
}

bool is_all_upper(const string &key) {
    for(char c : key) {
        if(!isupper(c)) return false;
    }
    return true;
}

bool check_dict_case(map<string,string> dict) {
    if(dict.empty()) return false;

    bool lower_case = true, upper_case = true;
    for(const auto &pair : dict) {
        if(!is_all_lower(pair.first)) lower_case = false;
        if(!is_all_upper(pair.first)) upper_case = false;
    }
    return lower_case || upper_case;
}