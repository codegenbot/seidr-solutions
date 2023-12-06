#include <iostream>
#include <string>
#include <map>
using namespace std;
bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) {
        return false;
    }
    bool is_lower = true;
    for (auto& entry : dict) {
        if (!isalpha(entry.first[0])) {
            is_lower = false;
            break;
        } else {
            is_lower &= islower(entry.first[0]);
        }
    }
    return is_lower;
}