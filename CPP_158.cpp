string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            return (a.size() == b.size()) ? a < b : a.size() < b.size();
        });
    for(string word : words) if(word.size() > max_word.size()) max_word = word;
    vector<char> unique_chars(max_word.begin(), max_word.end());
    unique(unique_chars.begin(), unique_chars.end());
    int max_unique_chars = count(unique_chars.begin(), unique_chars.end(), '*');
    string result;
    for(string word : words) if(count(word.begin(), word.end(), '*') == max_unique_chars){
        if(result.empty() || word < result) result = word;
    }
    return result;
}