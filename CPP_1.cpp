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
    cout << "Enter a string with parentheses: ";
    cin >> input;

    vector<string> result = separate_paren_groups(input);

    return 0;
}