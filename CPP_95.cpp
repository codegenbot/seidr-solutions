#include <iostream>
#include <map>
#include <string>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (const auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((pair.first[0] >= 'a' && pair.first[0] <= 'z') != (allLower)) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}

int newMain() {
    std::map<std::string, std::string> dict;
    std::string input;

    while (std::cin >> input) {
        if (input[0] == '#') break;
        dict[input] = "value";
    }

    bool result = check_dict_case(dict);
    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}