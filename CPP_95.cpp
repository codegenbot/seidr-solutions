#include <cctype>

bool is_all_lowercase(const string& str) {
    for(char c : str) {
        if(!islower(c)) return false;
    }
    return true;
}

bool is_all_uppercase(const string& str) {
    for(char c : str) {
        if(!isupper(c)) return false;
    }
    return true;
}

bool check_dict_case(map<string,string> dict) {
    if(dict.empty()) return false;

    auto it = dict.begin();
    bool lower = is_all_lowercase(it->first);
    bool upper = is_all_uppercase(it->first);

    for(; it != dict.end(); ++it) {
        if(lower && !is_all_lowercase(it->first)) return false;
        if(upper && !is_all_uppercase(it->first)) return false;
    }

    return true;
}