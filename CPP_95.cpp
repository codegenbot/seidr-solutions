int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (type 'quit' to stop):" << endl;
    while (true) {
        string key, value;
        cin >> key >> value;
        if (key == "quit") break;
        dict[key] = value;
    }
    bool result = check_dict_case(dict);
    cout << "All keys are either lower case or upper case: " << (result ? "True" : "False") << endl;
    return 0;
}