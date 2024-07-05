#include<stdio.h>
#include<string>
#include<map>
#include<cctype>
using namespace std;

bool check_dict_case(map<string,string> dict){
    if (dict.empty()) return false;

    bool isLower = islower(dict.begin()->first[0]);
    bool isUpper = isupper(dict.begin()->first[0]);

    for (auto &pair : dict) {
        for (char ch : pair.first) {
            if (isdigit(ch)) return false;
        }
        if (isLower && !all_of(pair.first.begin(), pair.first.end(), ::islower))
            return false;
        if (isUpper && !all_of(pair.first.begin(), pair.first.end(), ::isupper))
            return false;
    }
    return true;
}