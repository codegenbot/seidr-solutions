```cpp
#include <map>
#include <string>
#include <cctype>
#include <iostream>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (std::map<std::string, std::string>::const_iterator it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((it->first[0] >= 'a' && it->first[0] <= 'z') != (allLower)) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}

int main() {
    bool result = check_dict_case(std::map<std::string, std::string>());
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}