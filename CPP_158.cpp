string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    for(string word : words){
        if(count(word.begin(), word.end, word[0]) > count(max_word.begin(), max_word.end(), max_word[0])){
            max_word = word;
        }
    }
    return max_word;
}