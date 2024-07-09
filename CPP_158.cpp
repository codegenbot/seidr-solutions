string find_max(vector<string> words){
    string result = *words.begin();
    int max_unique_chars = 0;
    for(string word : words){
        int unique_chars = 0;
        set<char> chars(word.begin(), word.end());
        if(chars.size() > max_unique_chars){
            max_unique_chars = chars.size();
            result = word;
        } else if(chars.size() == max_unique_chars && word < result) {
            result = word;
        }
    }
    return result;
}