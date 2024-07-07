string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    for(auto& word : words){
        if(word.size() == max_word.size()){
            int max_unique_chars = 0;
            set<char> unique_chars(word.begin(), word.end());
            if(unique_chars.size() > max_unique_chars){
                max_word = word;
                max_unique_chars = unique_chars.size();
            }
        }
    }
    return max_word;
}