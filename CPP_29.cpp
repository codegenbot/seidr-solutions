```
bool issame(string a, string b) {
    if (a.length() != b.length())
        return false;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    vector<string> strings;
    string prefix, output;
    cout << "Enter the list of strings: ";
    for (string s; cin >> s; ) {
        strings.push_back(s);
    }
    cout << "Enter the prefix: ";
    cin >> prefix;
    vector<string> result = filter_by_prefix(strings, prefix);
    if (!result.empty()) {
        output += "Strings with the prefix '" + prefix + "' are: ";
        for (const auto& str : result) {
            output += str + " ";
        }
        cout << output << endl;
    } else
        cout << "No strings found with the given prefix." << endl;
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}