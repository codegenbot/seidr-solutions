vector<string> separate_paren_groups(string paren_string);

bool areSame(string a, string b) {
    return a == b;
}

int main() {
    vector<string> paren_groups = separate_paren_groups("((group1)(group2))");
    
    for (string group : paren_groups) {
        cout << group << endl;
    }

    return 0;
}