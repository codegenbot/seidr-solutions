string result = "";
    int start = 0;
    for (int i = 0; i <= s.size(); ++i) {
        if (s[i] == ' ' || i == s.size()) {
            string word = s.substr(start, i - start);
            sort(word.begin(), word.end());
            result += word + ' ';
            start = i + 1;
        }
    }
    result.pop_back();
    return result;
}