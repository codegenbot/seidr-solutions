string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end(),
        [](const string &a, const string &b) {
            return a.size() * (int)a.unique().size()
                   > b.size() * (int)b.unique().size();
    });
    return max_word;
}