Here is the completed code:

```cpp
bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& p : dict) {
        string key = p.first;
        if (!allLower && !allUpper) break;
        for (char& c : key) {
            if (isupper(c)) allLower = false;
            else if (islower(c)) allUpper = false;
        }
    }

    return allLower || allUpper;
}