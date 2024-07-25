#include <cctype>
#include <map>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;

        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        }

        if (!allLower) {
            for (char& c : pair.first) {
                if (!islower(c)) {
                    allLower = false;
                    break;
                }
            }
        } else {
            for (char& c : pair.first) {
                if (!islower(c)) {
                    allUpper = false;
                    break;
                }
            }
        }
    }

    return allLower || allUpper;
}