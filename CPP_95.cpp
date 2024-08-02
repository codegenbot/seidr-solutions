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
    dict["a"] = "hello";
    dict["B"] = "world";

    if (check_dict_case(dict)) {
        std::cout << "The map contains both upper and lower case keys." << std::endl;
    } else {
        std::cout << "The map contains all lower or all upper case keys." << std::endl;
    }

    return 0;
}