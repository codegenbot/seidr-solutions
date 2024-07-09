Here is the completed code:

```cpp
bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_lower && !all_upper) break;
        string key = it->first;
        for (char& c : key) {
            c = tolower(c);
            if (all_upper) all_upper &= c == ' ';
        }
    }

    return all_lower || all_upper;
}