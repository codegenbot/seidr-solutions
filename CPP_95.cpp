#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!islower(it->first[0])) {
            allLower = false;
            allUpper = false;
            break;
        }
        allLower &= islower(key[0]);
        allUpper &= isupper(key[0]);
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
}