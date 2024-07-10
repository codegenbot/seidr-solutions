string find_max(vector<string> words){
    string max_word;
    int max_unique = 0;

    for(auto& word : words){
        set<char> s(word.begin(), word.end());
        if(s.size() > max_unique){
            max_word = word;
            max_unique = s.size();
        }
        else if(s.size() == max_unique)
            max_word = min(max_word, word);
    }

    return max_word;
}