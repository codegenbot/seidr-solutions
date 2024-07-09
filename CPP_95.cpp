```cpp
#include <map>
#include <cctype>
#include <string>
#include <algorithm>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) continue;
        else if (!allLower) allUpper = true;
        else allLower &= islower(pair.first[0]);
    }

    return allLower || allUpper;
}

int main() {
    std::map<std::string, std::string> dict;
    // perform operations on the dictionary
    assert(check_dict_case(dict) == false);
    return 0;
}