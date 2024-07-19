int count_unique_chars(const string& word) {
    int char_count[26] = {0};
    int unique_chars = 0;
    for (char c : word) {
        if (char_count[c - 'a'] == 0) {
            unique_chars++;
            char_count[c - 'a']++;
        }
    }
    return unique_chars;
}

string find_max(vector<string> words) {
    string max_word = "";
    int max_unique_chars = -1;

    for (const string& word : words) {
        int unique_chars = count_unique_chars(word);
        if (unique_chars > max_unique_chars ||
            (unique_chars == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }
    
    return max_word;
}