int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (separated by space), then press Enter to finish: ";
    while (true) {
        string input;
        getline(cin, input);
        if (input.empty()) break;
        size_t space = input.find(' ');
        if (space == string::npos) continue;
        string key = input.substr(0, space);
        string value = input.substr(space + 1);
        dict[key] = value;
    }
    bool result = check_dict_case(dict);
    cout << (result ? "True" : "False") << endl;
    return 0;
}