#include <string>
#include <map>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        if (!std::isupper(pair.first[0])) all_upper = false;
        if (!std::islower(pair.first[0])) all_lower = false;
    }

    return all_upper || all_lower;
}