Here is the solution:

void camelCase() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '-')) continue;
            string word = s.substr(i + 1);
            cout << std::toupper(word[0]);
            for (int j = 1; j < word.size(); j++) {
                cout << std::tolower(word[j]);
            }
            i += word.size() - 1;
        } else if (s[i] == ' ') {
            continue;
        } else {
            cout << std::tolower(s[i]);
        }
    }
}