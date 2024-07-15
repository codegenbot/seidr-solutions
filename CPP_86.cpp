string result = "";
    string word = "";
    for (char c : s) {
        if (c == ' ' || c == '\0') {
            sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    sort(word.begin(), word.end());
    result += word;
    return result;
}