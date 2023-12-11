```
#include <iostream>
#include <string>
#include <map>
using namespace std;
bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool is_lower = true;
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!isalpha(it->first[0])) continue;
        if ((isupper(it->first[0]) && !is_lower) || (islower(it->first[0]) && is_lower)) return false;
        is_lower = islower(it->first[0]);
    }
    return true;
}
```