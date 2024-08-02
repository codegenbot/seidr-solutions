#include <iostream>
#include <string>
#include <map>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (isupper(pair.first[0])) {
            allLower = false;
        } else {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}

int main() {
    std::map<std::string, std::string> dict;
    dict["hello"] = "Hello";
    dict["world"] = "world";

    if (check_dict_case(dict)) {
        std::cout << "The dictionary contains at least one key that is either all uppercase or all lowercase.\n";
    } else {
        std::cout << "The dictionary does not contain any keys that are either all uppercase or all lowercase.\n";
    }

    return 0;
}