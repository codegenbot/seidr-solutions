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
    string input;
    cin >> input;

    vector<string> result = separate_paren_groups(input);

    for (string group : result) {
        cout << group << endl;
    }

    return 0;
}