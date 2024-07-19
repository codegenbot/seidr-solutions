#include <map>
#include <string>
#include <cctype>
#include <cassert>

bool check_dict_case() {
    std::map<std::string, std::string> dict;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        std::string key, value;
        cin >> key >> value;
        dict[key] = value;
    }

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
    assert(check_dict_case());
    return 0;
}