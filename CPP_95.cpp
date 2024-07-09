Here is the solution:

```cpp
bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& p : dict) {
        if (!islower(p.first[0]) && !isupper(p.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (allLower) {
            allLower &= islower(p.first[0]);
        } else if (allUpper) {
            allUpper &= isupper(p.first[0]);
        }
    }

    return allLower || allUpper;
}