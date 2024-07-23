```cpp
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        auto first = pair.first[0];
        if (!islower(first)) allLower = false;
        if (!isupper(toupper(first))) allUpper = false;
    }

    return allLower && !allUpper || !allLower && allUpper;
}