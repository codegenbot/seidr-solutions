#include <map>
#include <string>
#include <cctype>

bool hasAllLowerOrUpper(const std::map<std::string, std::string>& m) {
    if (m.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (const auto& pair : m) {
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