int main() {
    map<string, string> dict;
    cout << "Enter dictionary entries (key value pairs). Enter 'stop' to finish." << endl;
    while (true) {
        string key, value;
        cin >> key >> value;
        if (key == "stop") break;
        dict.insert({key, value});
    }
    bool result = check_dict_case(dict);
    cout << "Dictionary has either all keys in lowercase or all keys in uppercase: " << (result ? "true" : "false") << endl;
    return 0;
}