#include <iostream>
#include <map>
#include <cctype>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true;
    bool allUpper = true;
    for (auto& pair : dict) {
        if (!islower(pair.first[0])) allLower = false;
        if (!isupper(pair.first[0])) allUpper = false;
    }
    return allLower || allUpper;
}

int main() {
    map<string, string> dict;
    // Your code here...
    bool result = check_dict_case(dict);
    std::cout << (result ? "The dictionary is either fully lowercase or fully uppercase." : "The dictionary is neither fully lowercase nor fully uppercase.") << std::endl;
    return 0;
}