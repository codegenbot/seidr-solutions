string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), toupper(a[0])) <
                   count(b.begin(), b.end(), toupper(b[0]));
    });
    for(const auto& word : words){
        if(count(word.begin(), word.end(), toupper(word[0])) >
           count(max_word.begin(), max_word.end(), toupper(max_word[0]))) {
            max_word = word;
        }
    }
    return max_word;
}