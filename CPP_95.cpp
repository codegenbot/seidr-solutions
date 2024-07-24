#include <iostream>
#include <map>
#include <cctype>

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper)
            return false;

        if (allLower) {
            if (it->first.find((char)toupper(it->first[0])) != 0)
                allLower = false;
        } else {
            if (it->first.find((char)tolower(it->first[0])) != 0)
                allUpper = false;
        }
    }

    return allLower || allUpper;
}

int main() {
    map<string, string> dict;
    // Get user input
    int n;
    std::cout << "Enter the number of key-value pairs: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        string key, value;
        cout << "Enter key: ";
        cin >> key;
        cout << "Enter value: ";
        cin >> value;
        dict[key] = value;
    }

    if (check_dict_case(dict))
        cout << "The dictionary is either all lower case or all upper case." << endl;
    else
        cout << "The dictionary contains both lower and upper case keys." << endl;

    return 0;
}