bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strings;
    string prefix;

    // Read input from user
    cout << "Enter the list of strings: ";
    while (true) {
        string s;
        cin >> s;
        if (s == "quit") break;
        strings.push_back(s);
    }
    cout << "Enter the prefix: ";
    cin >> prefix;

    // Call filter_by_prefix and check result
    vector<string> result = filter_by_prefix(strings, prefix);

    // Check issame function
    vector<string> another_result = {"a", "b", "c"};
    if (issame(result, another_result)) {
        cout << "The results are the same." << endl;
    } else {
        cout << "The results are different." << endl;
    }

    return 0;
}