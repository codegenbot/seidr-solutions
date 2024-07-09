vector<string> words;
cin >> ws;
for (string s; cin >> s;) {
    words.push_back(move(s));
}

string result = *max_element(words.begin(), words.end(), 
    [](const string& a, const string& b) -> bool {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() > count(b.begin(), b.end(), unique_copy(b.begin(), b.end()).front());
    });

cout << result << endl;