#include <string>
#include <cctype>
#include <map>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto &pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower || !allUpper) {
            break;
        }

        if (!allLower) {
            for (char &c : pair.first) {
                if (islower(c)) {
                    allUpper = false;
                    break;
                }
            }
        } else {
            for (char &c : pair.first) {
                if (isupper(c)) {
                    allLower = false;
                    break;
                }
            }
        }
    }

    return allLower || allUpper;
}