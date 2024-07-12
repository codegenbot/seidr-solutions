int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (enter 'stop' to finish):" << endl;
    while (true) {
        string key, value;
        cin >> key >> value;
        if (key == "stop") break;
        dict.insert({key, value});
    }
    
    bool result = check_dict_case(dict);
    cout << "All keys are either lower case or upper case: " << (result ? "true" : "false") << endl;
    return 0;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(key[0]) && !isupper(key[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && islower(key[0])) {
            allLower = true;
        } else if (!allUpper && isupper(key[0])) {
            allUpper = true;
        }
    }

    return allLower || allUpper;
}