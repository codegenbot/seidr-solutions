#include <iostream>
#include <map>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    bool allLower = true;
    bool allUpper = true;

    for (const auto& it : dict) {
        if (!allLower && !allUpper)
            return false;

        if (allLower) {
            if (std::toupper(it.first[0]) != std::toupper(it->first[0]))
                allLower = false;
        } else {
            if (std::tolower(it.first[0]) != std::tolower(it->first[0]))
                allUpper = false;
        }
    }

    return allLower || allUpper;
}

int main() {
    std::map<std::string, std::string> dict;
    // Add your code here to read the dictionary from input
    bool result = check_dict_case(dict);
    if (result)
        std::cout << "The dictionary is either fully lowercase or fully uppercase." << std::endl;
    else
        std::cout << "The dictionary contains both lowercase and uppercase words." << std::endl;

    return 0;
}