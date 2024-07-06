#include <map>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

typedef string key_t;  

bool check_dict_case(const map<string, string>& dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        key_t key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = islower(key[0]);
        if (!allUpper) allUpper = isupper(key[0]);
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}