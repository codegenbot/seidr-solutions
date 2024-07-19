bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    int n;
    cin >> s >> n;

    vector<string> result = select_words(s, n);
    vector<string> expected = {"example", "code"};

    if (issame(result, expected)) {
        cout << "Result matches the expected output." << endl;
    } else {
        cout << "Result does not match the expected output." << endl;
    }

    return 0;
}