string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_len = 0;
    for(string word : words){
        set<char> s(word.begin(), word.end());
        if(s.size() > max_len){
            max_len = s.size();
            max_word = word;
        }
    }
    return max_word;
}