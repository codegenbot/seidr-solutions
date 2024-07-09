#include <iostream>
#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = std::tolower(it->first).find((char)0) == std::string::npos;
        if (allLower) allLower = std::toupper(it->first).find((char)0) == std::string::npos;
    }

    return allUpper && allLower ? true : false;
}

int main() {
    std::map<std::string, std::string> my_dict = {{"A", "a"}, {"B", "b"}};
    std::cout << (check_dict_case(my_dict) ? "True" : "False") << std::endl;
    return 0;
}