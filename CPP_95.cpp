```cpp
#include <string>
#include <cctype>
#include <unordered_map>

bool check_dict_case(std::map<std::string, std::string> dict) {
    std::unordered_map<std::pair<char, bool>, int> charCaseCount;

    for (auto& pair : dict) {
        char firstChar = pair.first[0];
        bool isLower = islower(firstChar);
        
        charCaseCount[{firstChar, isLower}]++;
    }

    bool allLower = true;
    bool allUpper = true;

    for (auto& count : charCaseCount) {
        if (count.second > 1 && (!isLower || !allLower)) allLower = false;
        if (count.second > 1 && (!isUpper || !allUpper)) allUpper = false;
    }

    return allLower && !allUpper || !allLower && allUpper;
}