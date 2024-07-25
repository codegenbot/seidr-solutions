string result = "";
    string word = "";
    for (char& c : s) {
        if (c == ' ' || c == '\n' || c == '\t') {
            sort(word.begin(), word.end());
            result += word + c;
            word = "";
        }
        else {
            word += c;
        }
    }
    if (!word.empty()) {
        sort(word.begin(), word.end());
        result += word;
    }
    return result;
}