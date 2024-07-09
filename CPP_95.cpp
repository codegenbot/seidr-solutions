```cpp
#include <map>
#include <string>
#include <cctype>
#include <cassert>
#include <initializer_list>
#include <iostream>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            return false;
        }
        if (!allLower && !allUpper) break;
        if (!allLower) allUpper = true;
        if (!allUpper) allLower = true;
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    cout << check_dict_case(map<string, string>{{"hello", "Hello"}}) << endl; 
    return 0;
}