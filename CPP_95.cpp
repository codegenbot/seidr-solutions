```cpp
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
    dict["hello"] = "world";
    dict["HELLO"] = "WORLD";

    if (check_dict_case(dict)) {
        std::cout << "The dictionary contains both lowercase and uppercase keys." << std::endl;
    } else {
        std::cout << "The dictionary contains either all lowercase or all uppercase keys." << std::endl;
    }

    return 0;
}