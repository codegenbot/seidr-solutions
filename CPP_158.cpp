string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
            [](const string& s1, const string& s2){
                if(s1.size() == s2.size()){
                    return s1<s2;
                }
                return s1.size()>s2.size();
            });
    
    for(string word:words){
        if(word.size() > max_word.size()){
            max_word = word;
        }else if(word.size() == max_word.size()){
            if(max_word < word){
                max_word = word;
            }
        }
    }

    return max_word;
}