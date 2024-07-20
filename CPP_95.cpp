Here is the completed code:

```cpp
bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if ((pair.first[0] >= 'a' && pair.first[0] <= 'z')) {
            for (char c : pair.first) {
                if (!islower(c)) {
                    allLower = false;
                    break;
                }
            }
        } else if ((pair.first[0] >= 'A' && pair.first[0] <= 'Z')) {
            for (char c : pair.first) {
                if (!isupper(c)) {
                    allUpper = false;
                    break;
                }
            }
        } else {
            return false;
        }

        if (!allLower && !allUpper) return false;
    }

    return allLower || allUpper;
}