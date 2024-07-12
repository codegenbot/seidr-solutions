int main() {
    map<string, string> dict;
    cout << "Enter dictionary entries (key value): ";
    while (true) {
        string line;
        getline(cin, line);
        if (line.empty()) break;
        size_t space = line.find(' ');
        if (space == string::npos) continue;
        string key = line.substr(0, space);
        string value = line.substr(space + 1);
        dict.insert({key, value});
    }
    cout << "Is dictionary case consistent? " << (check_dict_case(dict) ? "Yes" : "No") << endl;
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