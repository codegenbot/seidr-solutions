int main() {
    map<string, string> dict;
    cout << "Enter the key-value pairs in the format 'key value'\n";
    while (true) {
        string key, value;
        cin >> key >> value;
        if (key == "stop") break;
        dict[key] = value;
    }
    bool result = check_dict_case(dict);
    if (result) cout << "The dictionary is either fully in lower case or fully in upper case.\n";
    else cout << "The dictionary contains both lowercase and uppercase strings.\n";
    return 0;
}