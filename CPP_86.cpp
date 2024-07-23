string result = "";
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += c;
        } else {
            sort(word.begin(), word.end());
            result += word + c;
            word = "";
        }
    }
    sort(word.begin(), word.end());
    result += word;
    
    return result;
}