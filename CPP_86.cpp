string result = "";
    string word = "";
    for (char c : s) {
        if (c == ' ' || c == '\0') {
            sort(word.begin(), word.end());
            result += word + c;
            word = "";
        } else {
            word += c;
        }
    }
    return result;
}