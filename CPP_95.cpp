#include <map>
#include <string>
#include <algorithm>

using namespace std;

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = std::all_of(key.begin(), key.end(), ::islower);
        if (!allUpper) allUpper = std::all_of(key.begin(), key.end(), ::isupper);
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}