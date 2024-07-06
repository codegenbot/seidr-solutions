#include <iostream>
#include <map>
#include <cctype>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true;
    bool allUpper = true;
    for (auto& pair : dict) {
        if (!islower(pair.first[0])) allLower = false;
        if (!isupper(pair.first[0])) allUpper = false;
    }
    return allLower || allUpper;
}

int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (enter 'q' to quit):\n";
    while (true) {
        string input;
        cin >> input;
        if (input == "q") break;
        string value;
        cin >> value;
        dict[input] = value;
    }
    bool result = check_dict_case(dict);
    cout << (result ? "All keys have same case.\n" : "Keys have different cases.\n");
    return 0;
}