bool issame(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strings;
    string prefix, output;
    cout << "Enter the list of strings (space separated): ";
    getline(cin, prefix);
    strings = split(prefix, ' ');
    
    cout << "Enter the prefix: ";
    cin >> prefix;
    
    vector<string> result = filter_by_prefix(strings, prefix);
    
    for (const auto& str : result) {
        if (issame(str, prefix)) {
            output += str + " ";
        }
    }
    
    cout << "The strings that are the same as the given prefix: " << output << endl;
    
    return 0;
}