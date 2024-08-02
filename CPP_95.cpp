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
    
    // Add key-value pairs to the dictionary
    dict["hello"] = "world";
    dict["HELLO"] = "WORLD";

    if (check_dict_case(dict))
        std::cout << "The dictionary has at least one key that is either all uppercase or all lowercase." << std::endl;
    else
        std::cout << "The dictionary does not have any keys that are either all uppercase or all lowercase." << std::endl;

    return 0;
}