int main() {
    int n;
    cin >> n;

    vector<string> strings;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s); 
        strings.push_back(s);
    }

    string substring;
    getline(cin, substring);

    ...
}