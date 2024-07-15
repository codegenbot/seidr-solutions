vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    for (char c : s) {
        if (isalpha(c) || c == ' ') {
            if (isalpha(c)) {
                word += c;
            } else { // space encountered, check word for number of consonants
                int consonantCount = count_if(word.begin(), word.end(), [](char ch) {
                    return !strchr("aeiouAEIOU", ch) && isalpha(ch);
                });
                if (consonantCount == n) {
                    result.push_back(word);
                }
                word = "";
            }
        }
    }
    
    int consonantCount = count_if(word.begin(), word.end(), [](char ch) {
        return !strchr("aeiouAEIOU", ch) && isalpha(ch);
    });
    if (!word.empty() && consonantCount == n) {
        result.push_back(word);
    }

    return result;
}