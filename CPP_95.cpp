#include <map>
#include <string>
using namespace std;

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto& pair : dict) {
        auto key = pair.first;
        if (!islower(key[0]) && !isupper(key[0])) {
            allLower = false;
            allUpper = false;
            break;
        }
        allLower &= islower(key[0]);
        allUpper &= isupper(key[0]);
    }
    return allLower || allUpper;
}

int main() {
    assert (check_dict_case({}) == false);
    // test your function here
}