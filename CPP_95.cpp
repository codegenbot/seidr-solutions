#include <iostream>
#include <map>
#include <cctype>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper)
            break;

        if (!islower(key[0])) {
            allLower = false;
        }
        if (!isupper(key[0])) {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    map<string, string> dict;
    dict["key1"] = "value1";
    dict["KEY2"] = "VALUE2";
    if (check_dict_case(dict)) {
        std::cout << "The dictionary case is either all lower or all upper." << std::endl;
    } else {
        std::cout << "The dictionary case is mixed." << std::endl;
    }
    return 0;
}