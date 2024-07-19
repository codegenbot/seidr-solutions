#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto& pair : dict) {
        if (!std::islower(pair.first[0]) && !std::isupper(pair.first[0])) {
            allLower = false; allUpper = false; break;
        }
        allLower &= std::islower(pair.first[0]);
        allUpper &= std::isupper(pair.first[0]);
    }
    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    return true;
}