string find_max(vector<string> words){
    string max_word;
    int max_length = 0;
    for(auto word:words){
        set<char> char_set(word.begin(),word.end());
        if(char_set.size() > max_length){
            max_word = word;
            max_length = char_set.size();
        }
    }
    return max_word;
}