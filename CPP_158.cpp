string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b){ return count(a.begin(), a.end(), tolower(*a.rbegin())) <
            count(b.begin(), b.end(), tolower(*b.rbegin())); });
    return max_word;
}