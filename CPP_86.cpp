string ordered_word = "";
    string result = "";
    int start = 0;
    
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || i == s.length()) {
            string word = s.substr(start, i - start);
            start = i + 1;
            sort(word.begin(), word.end());
            result += word + " ";
        }
    }
    
    return result;
}