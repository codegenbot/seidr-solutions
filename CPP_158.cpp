string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    for(string word : words){
        if(unique(word.begin(), word.end()) > unique(max_word.begin(), max_word.end())){
            max_word = word;
        }
    }
    return max_word;
}