#include <unordered_map>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    std::unordered_map<std::pair<char, bool>, int> caseCounts;

    for (auto& pair : dict) {
        if (!islower(pair.first[0])) {
            caseCounts[{pair.first[0], false}] = 1;
        } else {
            caseCounts[{pair.first[0], true}] = 1;
        }
    }

    int lowerCount = 0, upperCount = 0;

    for (auto& pair : caseCounts) {
        if (pair.second == 1) {
            if (pair.first.second) lowerCount++;
            else upperCount++;
        }
    }

    return lowerCount > 0 && upperCount > 0;
}