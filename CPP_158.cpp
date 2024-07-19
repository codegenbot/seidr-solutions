string find_max(vector<string> words){
    string max_word = *words.begin();
    for(const auto &word : words){
        int unique_chars_word = word.length() - (word.length() - unique(word, 0)) + 1;
        if(unique_chars_word > (max_word.length() - (max_word.length() - unique(max_word, 0)) + 1) || 
           (unique_chars_word == (max_word.length() - (max_word.length() - unique(max_word, 0)) + 1) && word < max_word))
            max_word = word;
    }
    return max_word;
}

int unique(string s, int i){
    if(i >= s.length())
        return i;
    bool found = false;
    for(int j = i; j < s.length(); j++){
        if(s[i] == s[j])
            found = true;
        else
            break;
    }
    return found ? j : i;
}