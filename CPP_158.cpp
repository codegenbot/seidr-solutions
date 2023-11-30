string find_max(vector<string> words){
    string max_word = "";
    int max_unique_chars = 0;

    for(string word : words){
        int unique_chars = 0;
        bool char_count[26] = {false};

        for(char c : word){
            if(!char_count[c - 'a']){
                unique_chars++;
                char_count[c - 'a'] = true;
            }
        }

        if(unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)){
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }

    return max_word;
}