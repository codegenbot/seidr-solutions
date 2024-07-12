int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (separated by space), type 'quit' to stop: ";
    while(true) {
        string input;
        cin >> input;
        if(input == "quit") break;
        size_t separator = input.find(" ");
        string key = input.substr(0, separator);
        string value = input.substr(separator+1);
        dict.insert({key, value});
    }
    bool result = check_dict_case(dict);
    cout << (result ? "Yes\n" : "No\n");
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