#include <map>
#include <string>

using namespace std;

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (islower(pair.first[0])) allLower = false;
        else if (isupper(pair.first[0])) allUpper = false;
        else return false;
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
}