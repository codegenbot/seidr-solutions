#include <iostream>
#include <map>
#include <cctype>

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
    cout << "Enter key-value pairs (separated by space), enter 'stop' to finish: ";
    string input;
    while (true) {
        cin >> input;
        if (input == "stop") break;
        size_t space = input.find(' ');
        if (space == string::npos) continue;
        string key = input.substr(0, space);
        string value = input.substr(space + 1);
        dict[key] = value;
    }
    bool result = check_dict_case(dict);
    cout << "Dictionary case: " << (result ? "consistent" : "inconsistent") << endl;
    return 0;
}