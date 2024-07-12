Here is the completed code:

```cpp
bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper)
            return false;
        if (islower(it->first[0]))
            allLower = false;
        else
            allUpper = false;
    }

    return allLower || allUpper;
}