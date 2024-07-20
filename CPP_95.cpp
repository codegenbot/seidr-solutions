Here is the completed code:

```cpp
bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) {
            continue;
        }

        if (!allLower) {
            if (!isupper(pair.first[0])) return false;
        } else if (!allUpper) {
            if (!islower(pair.first[0])) return false;
        }
    }

    return allLower || allUpper;
}