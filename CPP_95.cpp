#include <map>
#include <string>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        auto key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = std::islower(key[0]);
        if (!allUpper) allUpper = std::isupper(key[0]);
    }

    return !(allLower || allUpper);
}

int test_main() {
    assert(check_dict_case({}) == false);
    assert(!check_dict_case({{"hello", "world"}}));
    assert(check_dict_case({{"HELLO", "WORLD"}}));
    return 0;
}