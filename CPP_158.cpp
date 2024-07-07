string find_max(vector<string> words){
    string max_word = "";
    for(auto& word : words){
        int unique_chars = 0;
        unordered_set<char> chars;
        for(char c : word){
            if(chars.find(c) == chars.end()){
                unique_chars++;
                chars.insert(c);
            }
        }
        if(unique_chars > 0 && (max_word.empty() || unique_chars > count(max_word.begin(), max_word.end(), isalpha))){
            max_word = word;
        } else if(unique_chars == count(max_word.begin(), max_word.end(), isalpha) && word < max_word){
            max_word = word;
        }
    }
    return max_word;
}