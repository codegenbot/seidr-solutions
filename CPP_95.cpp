```cpp
bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        for (char c : pair.first) {
            if (!islower(c)) {
                allLower = false;
            }
            if (!isupper(c)) {
                allUpper = false;
            }
        }

        for (char c : pair.second) {
            if (!islower(c)) {
                allLower = false;
            }
            if (!isupper(c)) {
                allUpper = false;
            }
        }
    }

    return allLower || allUpper;
}