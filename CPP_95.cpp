```cpp
#include <map>
#include <string>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!all_lower && !all_upper) break;
        if (!all_lower) all_lower = tolower(key[0]) == 0;
        if (!all_upper) all_upper = toupper(key[0]) == 0;
    }

    return all_lower || all_upper;
}

int main() {
    map<string, string> dict;
    // insert input from user into the dictionary
    cout << "Enter key-value pairs in format 'key value', each on a new line. Enter 'quit' to stop.\n";
    string line;
    while (true) {
        cin >> line;
        if (line == "quit") break;
        size_t space = line.find(' ');
        dict[substr(line, 0, space)] = substr(line, space + 1);
    }
    // call the check_dict_case function with the dictionary
    bool result = check_dict_case(dict);
    if (result) {
        cout << "Dictionary is either all uppercase or all lowercase.\n";
    } else {
        cout << "Dictionary is not all uppercase and not all lowercase.\n";
    }
    return 0;
}

string substr(const string& s, size_t pos, size_t len = string::npos) {
    if (pos > s.length()) return "";
    string result = s.substr(pos, len);
    return result;
}