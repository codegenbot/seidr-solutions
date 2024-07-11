string find_max(vector<string> words){
    string max_word = "";
    for(string word : words){
        int unique_chars = 0;
        set<char> s(word.begin(), word.end());
        if(unique_chars < s.size()){
            unique_chars = s.size();
            max_word = word;
        }
    }
    return max_word;
}