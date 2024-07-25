string ordered_word = s;
    string result = "";
    int start = 0;
    for (int i = 0; i <= s.size(); ++i) {
        if (s[i] == ' ' || i == s.size()) {
            string word = ordered_word.substr(start, i - start);
            sort(word.begin(), word.end());
            result += word + " ";
            start = i + 1;
        }
    }
    return result;
}