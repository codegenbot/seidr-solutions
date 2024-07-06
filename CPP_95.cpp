```cpp
#include <string>
using namespace std;

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!all_lower && !all_upper) break;
        if (!all_lower) all_lower = tolower(key[0]) == 0;
        if (!all_upper) all_upper = toupper(key[0]) == 0;
    }

    return all_lower || all_upper;
}