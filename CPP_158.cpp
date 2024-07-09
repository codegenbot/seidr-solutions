string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    int max_unique = 0;
    for (int i = 0; i < max_word.size(); i++) {
        bool unique = true;
        for (int j = 0; j < words.size(); j++) {
            if (i >= words[j].size() || words[j][i] == max_word[i]) {
                continue;
            }
            unique = false;
            break;
        }
        if (unique) {
            max_unique++;
        } else {
            break;
        }
    }
    
    for (int i = 0; i < words.size(); i++) {
        int unique_chars = 0;
        for (int j = 0; j < words[i].size(); j++) {
            bool found = false;
            for (int k = 0; k < i; k++) {
                if (words[k][j] == words[i][j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                unique_chars++;
            }
        }
        if (unique_chars > max_unique) {
            max_word = words[i];
            max_unique = unique_chars;
        } else if (unique_chars == max_unique && words[i] < max_word) {
            max_word = words[i];
        }
    }
    
    return max_word;
}