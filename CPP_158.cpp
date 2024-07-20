string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    int max_unique_chars = 0;
    for(string word : words){
        int unique_chars = word.length();
        unique_chars -= __builtin_popcount(word[0]) + __builtin_popcount(word[1]) + __builtin_popcount(word[2]);
        if(unique_chars > max_unique_chars){
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }
    return max_word;
}