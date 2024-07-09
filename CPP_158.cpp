vector<string> words;
cin >> ws; // read whitespace characters to clear input buffer
for (string s; cin >> s;) {
    words.push_back(s);
}

sort(words.begin(), words.end());
auto it = max_element(words.begin(), words.end(),
    [](const string& a, const string& b) {
        return count(a.begin(), a.end(), '*') > count(b.begin(), b.end(), '*');
    });

cout << *it;