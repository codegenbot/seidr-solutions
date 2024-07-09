```cpp
#include <map>
#include <string>
#include <cctype>

bool dictionary_case_sensitivity(const std::map<std::string, std::string>& dictionary) {
    if (dictionary.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (const auto& pair : dictionary) {
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