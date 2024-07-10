```cpp
#include <map>
#include <string>
#include <cctype>

int check_dict_case(map<string, string> dict) {
    if (dict.empty()) return 0;

    int allLower = 1;
    int allUpper = 1;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = 0;
            allUpper = 0;
            break;
        } else if ((pair.first[0] >= 'a' && pair.first[0] <= 'z') != (allLower == 1)) {
            allLower = 0;
            allUpper = 0;
            break;
        }
    }

    return allLower || allUpper;
}