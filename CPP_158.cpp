string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    unsigned int max_count = 0;
    for(string word : words){
        if(word.size() > max_count){
            max_count = word.size();
            max_word = word;
        }
        else if(word.size() == max_count){
            max_word = min(max_word, word);
        }
    }
    return max_word;
}