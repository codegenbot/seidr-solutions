#include <iostream>
#include <map>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    bool allLower = true;
    bool allUpper = true;

    for (const auto& pair : dict) {
        if (!allLower && !allUpper)
            return false;

        if (allLower) {
            if (std::tolower(pair.first[0]) != std::tolower(pair.second[0]))
                allLower = false;
        } else {
            if (std::toupper(pair.first[0]) != std::toupper(pair.second[0]))
                allUpper = false;
        }
    }

    return allLower || allUpper;
}

int main() {
    std::map<std::string, std::string> dict;

    // Read input from user

    bool result = check_dict_case(dict);

    if (result) {
        std::cout << "The dictionary is either entirely lower-case or entirely upper-case." << std::endl;
    } else {
        std::cout << "The dictionary contains both lower-case and upper-case words." << std::endl;
    }

    return 0;
}