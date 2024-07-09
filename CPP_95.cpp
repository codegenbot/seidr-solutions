#include <iostream>
#include <map>
#include <string>

int main() {
    map<string, string> dict;
    cout << "Enter the dictionary (keys separated by spaces): ";
    string key;
    while(getline(cin, key)) {
        int pos = key.find(',');
        if(pos != string::npos) {
            string upperKey = key.substr(0, pos);
            string lowerKey = key.substr(pos+1);
            dict[upperKey] = lowerKey;
            key.clear();
        }
    }

    bool result = check_dict_case(dict);

    cout << "Are all keys in the same case? " << (result ? "true" : "false") << endl;

    return 0;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = tolower(it->first).find((char)0) == string::npos;
        if (allLower) allLower = toupper(it->first).find((char)0) == string::npos;
    }

    return allUpper && allLower;
}