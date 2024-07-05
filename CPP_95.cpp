#include <stdio.h>
#include <string>
#include <map>
#include <cctype>
using namespace std;

bool is_lowercase(const string &str) {
    for (char ch : str) {
        if (!islower(ch)) return false;
    }
    return true;
}

bool is_uppercase(const string &str) {
    for (char ch : str) {
        if (!isupper(ch)) return false;
    }
    return true;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    auto it = dict.begin();
    bool all_lower = is_lowercase(it->first);
    bool all_upper = is_uppercase(it->first);

    for (; it != dict.end(); ++it) {
        if (all_lower && !is_lowercase(it->first)) return false;
        if (all_upper && !is_uppercase(it->first)) return false;
    }
    return true;
}