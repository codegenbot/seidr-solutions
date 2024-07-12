int main() {
    map<string, string> dict;
    cout << "Enter key-value pairs (separated by space). Type 'stop' to finish.\n";
    string line;
    while (getline(cin, line)) {
        size_t pos = line.find(' ');
        if (pos == string::npos) {
            break;
        }
        string key = line.substr(0, pos);
        string value = line.substr(pos + 1);
        dict.insert({key, value});
    }
    bool result = check_dict_case(dict);
    cout << "Case of dictionary keys: " << (result ? "all lower or all upper" : "mixed") << endl;
    return 0;
}