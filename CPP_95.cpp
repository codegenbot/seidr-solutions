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
    dict["A"] = "apple";
    dict["B"] = "banana";

    if (check_dict_case(dict)) {
        std::cout << "The map contains a mix of uppercase and lowercase keys." << std::endl;
    } else {
        std::cout << "The map contains either all uppercase or all lowercase keys." << std::endl;
    }

    return 0;
}