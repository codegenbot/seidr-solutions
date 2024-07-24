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
    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter key-value pair (or 'q' to quit): ";
        std::string key, value;
        std::cin >> key >> value;
        if (key == "q")
            break;
        dict.insert({key, value});
    }

    // Check dictionary case
    bool result = check_dict_case(dict);

    // Print output
    if (result)
        std::cout << "All keys and values have the same case.\n";
    else
        std::cout << "Not all keys and values have the same case.\n";

    return 0;
}