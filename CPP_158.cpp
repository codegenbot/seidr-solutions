string find_max(vector<string> words){
    string max_word;
    int max_unique = 0;
    for(auto& word : words){
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_unique){
            max_unique = unique_chars.size();
            max_word = word;
        } else if(unique_chars.size() == max_unique){
            if(word < max_word) max_word = word;
        }
    }
    return max_word;
}