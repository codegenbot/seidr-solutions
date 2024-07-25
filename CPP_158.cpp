string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    for(string word : words){
        if(count(word.begin(), word.end, [](char c){return !isupper(c);}) > count(max_word.begin(), max_word.end(), [](char c){return !isupper(c);})){
            max_word = word;
        }
        else if(count(word.begin(), word.end, [](char c){return !isupper(c);}) == count(max_word.begin(), max_word.end(), [](char c){return !isupper(c);}) && word < max_word){
            max_word = word;
        }
    }
    return max_word;
}