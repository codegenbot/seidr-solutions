vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    auto is_consonant = [](char c) {
        return isalpha(c) && !strchr("aeiouAEIOU", c);
    };
    
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int consonant_count = count_if(word.begin(), word.end(), is_consonant);
                if (consonant_count == n) {
                    result.push_back(word);
                }
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        int consonant_count = count_if(word.begin(), word.end(), is_consonant);
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    
    return result;
}