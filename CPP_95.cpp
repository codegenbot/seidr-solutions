#include <cctype>

bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) return false;

    auto it = dict.begin();
    bool isLower = islower(it->first[0]);
    bool isUpper = isupper(it->first[0]);

    for (const auto& pair : dict) {
        for (char c : pair.first) {
            if ((isLower && !islower(c)) || (isUpper && !isupper(c))) {
                return false;
            }
        }
    }
    return true;
}