for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            string word = "";
            while (i < s.size() && s[i] != ' ') {
                word += s[i++];
            }
            sort(word.begin(), word.end());
            cout << word;
        }
        if (i < s.size() && s[i] == ' ') {
            cout << ' ';
        }
    }
}