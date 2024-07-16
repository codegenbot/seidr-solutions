#include <iostream>
#include <string>
#include <map>
#include <cctype>

bool check_map_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool all_lower = true;
    bool all_upper = true;

    for (const auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            all_lower = false;
            all_upper = false;
            break;
        } else if (!all_lower && !all_upper)
            continue;
        else if (!all_lower) {
            all_lower = islower(pair.first[0]);
            all_upper = !all_lower;
        } else {
            all_lower = isupper(pair.first[0]);
            all_upper = !all_lower;
        }
    }

    return all_lower || all_upper;
}

int main() {
    map<string, string> dict;
    // your code here
}