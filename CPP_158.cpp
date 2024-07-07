string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (a.size() << 5u) + count(a.begin(), a.end(), a[0]) <
                   (b.size() << 5u) + count(b.begin(), b.end(), b[0]);
    });
    
    for(const auto& word : words){
        if(count(word.begin(), word.end(), unique(word.begin(), word.end())[0]) > 
           count(max_word.begin(), max_word.end(), unique(max_word.begin(), max_word.end())[0])){
            max_word = word;
        }
    }

    return *min_element(words.begin(), words.end(),
                         [](const string& a, const string& b) {
                             return a < b;
                         });
}