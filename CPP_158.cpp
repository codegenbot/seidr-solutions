string find_max(vector<string> words){
    string max_word = *words.begin();
    for (const auto& word : words) {
        int unique_chars_word = 0;
        set<char> chars(word.begin(), word.end());
        if (chars.size() > unique_chars_word) {
            unique_chars_word = chars.size();
            max_word = word;
        }
    }
    return max_word;
}