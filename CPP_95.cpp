````
#include <map>
using namespace std;

map<string, string> dict;

bool check_dict_case(map<string, string> input_dict) {
    if (input_dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = input_dict.begin(); it != input_dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = tolower(it->first).find((char)0) == string::npos;
        if (allLower) allLower = toupper(it->first).find((char)0) == string::npos;
    }

    return allUpper && allLower;
}
```