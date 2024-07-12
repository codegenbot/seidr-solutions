int main() {
    map<string, string> dict;
    cout << "Enter the key-value pairs (separated by space), then press Enter to finish: ";
    string input;
    while (getline(cin, input)) {
        size_t space = input.find(' ');
        if (space == string::npos) break;
        string key = input.substr(0, space);
        string value = input.substr(space + 1);
        dict[key] = value;
    }
    cout << "Dictionary contains all lower case keys: " << (check_dict_case(dict) ? "true" : "false") << endl;
    return 0;
}