vector<string> separate_paren_groups(string paren_string);

bool areSame(string a, string b) {
    return a == b;
}

int main() {
    vector<string> result = separate_paren_groups("((hello)(world))(test)");
    for (string group : result) {
        cout << group << endl;
    }
    return 0;
}