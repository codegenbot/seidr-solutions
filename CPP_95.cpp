#include <map>
#include <string>
#include <cctype>

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
    assert(check_dict_case({}) == false);
    return 0;
}