#include <iostream>
#include <map>
#include <string>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper)
            break;

        if (!islower(key[0])) {
            allLower = false;
        }
        if (!isupper(key[0])) {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    map<string, string> dict;
    cout << "Enter key-value pairs (enter 'q' to quit):" << endl;
    while (true) {
        string key, value;
        cin >> key >> value;
        if (key == "q") break;
        dict[key] = value;
    }
    bool result = check_dict_case(dict);
    cout << "Dictionary case: " << (result ? "mixed" : "uniform") << endl;
    return 0;
}