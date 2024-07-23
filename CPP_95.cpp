```cpp
#include <map>
#include <string>
#include <cctype>

int main() {
    std::map<std::string, std::string> dict;
    bool result = check_dict_case(dict);
    
    return 0;
}

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0]) && !islower(pair.first[0])) {
            allUpper = false;
            allLower = false;
            break;
        } else if ((isupper(pair.first[0]) && !allUpper) || (islower(pair.first[0]) && !allLower)) {
            allUpper = allLower = false;
        }
    }

    return allUpper || allLower;
}