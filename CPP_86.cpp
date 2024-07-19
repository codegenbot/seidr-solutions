string result = "";
    string word = "";
    for (char c : s) {
        if (isalpha(c))
            word += c;
        else {
            sort(word.begin(), word.end());
            result += word;
            result += c;
            word = "";
        }
    }
    if (!word.empty()) {
        sort(word.begin(), word.end());
        result += word;
    }
    return result;
}