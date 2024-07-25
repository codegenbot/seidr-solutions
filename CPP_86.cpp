string ordered_word = s;
    string result = "";
    int start = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || i == s.length()) {
            sort(ordered_word.begin() + start, ordered_word.begin() + i);
            result += ordered_word.substr(start, i - start);
            if (i != s.length()) {
                result += ' ';
            }
            start = i + 1;
        }
    }

    return result;
}