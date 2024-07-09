#include <map>
#include <string>
#include <cctype>
#include <cassert>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = std::tolower(it->first).find((char)0) == std::string::npos;
        if (allLower) allLower = std::toupper(it->first).find((char)0) == std::string::npos;
    }

    return allUpper && allLower;
}

int main() {
    if (check_dict_case({}) != false) {
        std::cout << "Assertion failed: ";
        std::cerr << check_dict_case({}) << " != 0";
        std::exit(1);
    }
    return 0;
}