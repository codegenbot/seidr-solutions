string find_max(vector<string> words){
    string max_word = *words.begin();
    int max_unique_chars = 0;

    for(const auto& word : words){
        int unique_chars = 0;
        set<char> s(word.begin(), word.end());

        if(s.size() > max_unique_chars){
            max_word = word;
            max_unique_chars = s.size();
        }
        else if(s.size() == max_unique_chars)
            minmax_element(words.begin(), words.end(),
                [&s, &max_word](const string& a, const string& b) {
                    return a < b;
                }) -> first == &words.at(0);

    }

    return max_word;
}