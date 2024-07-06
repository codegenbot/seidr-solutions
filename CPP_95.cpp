#include <map>
#include <string>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        std::string key = pair.first;
        bool thisKeyAllLower = std::all_of(key.begin(), key.end(),
                                            [](char c){return std::islower(c);});
        bool thisKeyAllUpper = std::all_of(key.begin(), key.end(),
                                            [](char c){return std::isupper(c);});

        if (thisKeyAllLower) {
            allLower = true;
            allUpper = false;
        } else if (thisKeyAllUpper) {
            allLower = false;
            allUpper = true;
        }
    }

    return allLower || allUpper;
}

int userMain() {
    assert(check_dict_case({}) == false);
    return 0;
}