string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_len = 0;

    for (const auto& word : words) {
        set<char> char_set(word.begin(), word.end());
        if (char_set.size() > max_len) {
            max_len = char_set.size();
            max_word = word;
        } else if (char_set.size() == max_len && word < max_word) {
            max_word = word;
        }
    }

    return max_word;
}