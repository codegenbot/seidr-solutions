```cpp
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
    cout << "Enter the number of key-value pairs: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string key, value;
        cout << "Enter key and value (separated by space): ";
        cin >> key >> value;
        dict[key] = value;
    }

    if (check_dict_case(dict)) {
        cout << "The dictionary case is consistent.\n";
    } else {
        cout << "The dictionary case is not consistent.\n";
    }
    return 0;
}