string find_max(vector<string> words){
    string result = *words.begin();
    int max_unique_chars = 0;

    for(auto& word : words){
        int unique_chars = 0;
        set<char> s(word.begin(), word.end());
        if(s.size() > max_unique_chars){
            max_unique_chars = s.size();
            result = word;
        }
    }

    return result;
}