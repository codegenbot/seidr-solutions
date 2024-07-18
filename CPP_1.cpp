vector<string> separate_paren_groups(string paren_string);

bool areSame(string a, string b) {
    return a == b;
}

int main() {
    string input;
    getline(cin, input);

    vector<string> groups = separate_paren_groups(input);

    for (const string& group : groups) {
        if (areSame(group, "")) {
            cout << "Empty group" << endl;
        } else {
            cout << group << endl;
        }
    }

    return 0;
}