string result = "";
    string current_word = "";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ' || i == s.size() - 1) {
            if (i == s.size() - 1) {
                current_word += s[i];
            }
            sort(current_word.begin(), current_word.end());
            result += current_word + " ";
            current_word = "";
        } else {
            current_word += s[i];
        }
    }
    return result;
}