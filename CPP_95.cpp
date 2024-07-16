```cpp
#include <map>
#include <cctype>
#include <string>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) return false;
    bool allLower = true;
    bool allUpper = true;
    for (const auto& pair : dict) {
        if (!std::islower(pair.first[0]) && !std::isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) continue;
        allLower &= std::islower(pair.first[0]);
        allUpper &= std::isupper(pair.first[0]);
    }
    return allLower || allUpper;
}

int main() {
    // your code here
    return 0;
}