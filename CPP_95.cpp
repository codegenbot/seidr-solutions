#include <cassert>
#include <map>
#include <string>
#include <cctype>
#include <initializer_list>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!std::islower(pair.first[0]) && !std::isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((allLower && std::isupper(pair.first[0])) || (allUpper && std::islower(pair.first[0]))) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}