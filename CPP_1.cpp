vector<string> separate_paren_groups(string paren_string);

bool areSame(string a, string b) {
    return a == b;
}

int main() {
    string input;
    cin >> input;
    vector<string> groups = separate_paren_groups(input);
    for (string group : groups) {
        cout << group << endl;
    }
    return 0;
}