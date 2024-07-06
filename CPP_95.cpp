#include <map>
#include <string>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(key[0])) {
            allLower = false;
            break;
        }
        if (!isupper(key[0])) {
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