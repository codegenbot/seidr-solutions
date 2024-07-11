#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (islower(it->first[0]))
            allUpper = false;
        else
            allLower = false;
    }

    return allLower || allUpper;
}

int main() {
    map<string, string> dict;

    cout << "Enter key-value pairs for the dictionary. Use 'quit' to stop input." << endl;
    while (true) {
        string key, value;
        cout << "Key: ";
        cin >> key;
        if (key == "quit")
            break;
        cout << "Value: ";
        cin >> value;
        dict.insert(make_pair(key, value));
    }

    bool result = check_dict_case(dict);
    cout << (result ? "All keys are in the same case." : "Dictionary has mixed-case keys.") << endl;

    return 0;
}