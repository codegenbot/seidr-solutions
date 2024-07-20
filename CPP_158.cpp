string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_unique = 0;

    for(auto word : words){
        set<char> s(word.begin(), word.end());
        if(s.size() > max_unique){
            max_word = word;
            max_unique = s.size();
        }
    }

    return max_word;
}