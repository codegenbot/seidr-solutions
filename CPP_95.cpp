#include <cctype>

bool isLowerCase(const string& s) {
    for (char c : s) {
        if (!islower(c)) return false;
    }
    return true;
}

bool isUpperCase(const string& s) {
    for (char c : s) {
        if (!isupper(c)) return false;
    }
    return true;
}

bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) return false;

    bool allLower = true, allUpper = true;
    for (const auto& pair : dict) {
        if (!isLowerCase(pair.first)) allLower = false;
        if (!isUpperCase(pair.first)) allUpper = false;
    }

    return allLower || allUpper;
}