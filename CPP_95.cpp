```cpp
#include <map>
#include <string>
#include <cctype>

bool check_dict_case(map<string, string> dict) {
    map<string, string> temp = dict;
    if (temp.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : temp) {
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