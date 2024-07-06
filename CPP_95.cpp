```cpp
#include <map>
#include <string>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = islower(key[0]);
        if (!allUpper) allUpper = isupper(key[0]);
    }

    return allLower || allUpper;
}

int main() {
    std::map<std::string, std::string> dict;
    assert(check_dict_case(dict) == false);
    return 0;
}