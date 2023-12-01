vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word.clear();
        } else {
            word += s[i];
        }
    }
    
    if (count_consonants(word) == n) {
        result.push_back(word);
    }
    
    return result;
}

int count_consonants(string word) {
    int count = 0;
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    for (int i = 0; i < word.length(); i++) {
        if (consonants.find(word[i]) != string::npos) {
            count++;
        }
    }
    return count;
}