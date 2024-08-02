string find_max(vector<string> words){
    string max_word = *words.begin();
    for(const auto& word : words){
        if(count(word.begin(),word.end(),unique(word.begin(),word.end())) > count(max_word.begin(),max_word.end(), unique(max_word.begin(),max_word.end()))){
            max_word = word;
        }
        else if(count(word.begin(),word.end(),unique(word.begin(),word.end())) == count(max_word.begin(),max_word.end(), unique(max_word.begin(),max_word.end()))){
            max_word = min(word, max_word);
        }
    }
    return max_word;
}