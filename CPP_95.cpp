```cpp
#include <map>
#include <string>
#include <cctype>

int main() {
    map<string, string> dict = {{"hello", "WORLD"}, {"hi", "world"}};
    bool result = check_dict_case(dict);
    cout << (result ? "True" : "False") << endl;
    return 0;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((pair.first[0] >= 'a' && pair.first[0] <= 'z') != (allLower)) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}