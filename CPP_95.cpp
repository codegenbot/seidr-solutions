Here is the completed code:

```cpp
bool check_dict_case(map<string, string> dict) {
    bool allLower = true, allUpper = true;

    for (auto &pair : dict) {
        if (!pair.first.empty()) {
            if (!allLower && !allUpper)
                return false;
            allLower &= islower(pair.first[0]);
            allUpper &= isupper(pair.first[0]);
        }
    }

    return allLower || allUpper;
}