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

    dict["a"] = "hello";
    dict["b"] = "HELLO";

    if (check_dict_case(dict)) {
        std::cout << "The dictionary has at least one key that is all uppercase or all lowercase." << std::endl;
    } else {
        std::cout << "The dictionary does not have any keys that are all uppercase or all lowercase." << std::endl;
    }

    return 0;
}