string find_max(vector<string> words){
    string max_word;
    int max_count = 0;

    for(auto word: words){
        int count = 0;
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_count){
            max_word = word;
            max_count = unique_chars.size();
        }
        else if(unique_chars.size() == max_count && word < max_word){
            max_word = word;
        }
    }

    return max_word;
}