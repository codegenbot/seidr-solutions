bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i=0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    string s = "apple banana orange pear";
    int n = 3;
    vector<string> expected = {"pear"};
    vector<string> result = select_words(s, n);

    if (issame(result, expected)) {
        cout << "Result matches expected vector." << endl;
    } else {
        cout << "Result does not match expected vector." << endl;
    }
}