#include <string>
#include <map>
#include <cctype>

bool islower(int c) { return std::isalpha(c) && std::tolower(c) == c; }
bool isupper(int c) { return std::isalpha(c) && std::toupper(c) == c; }

bool check_dict_case(map<pair<string, string>, bool> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) { 
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((pair.first[0] >= 'a' && pair.first[0] <= 'z') != (allLower)) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}