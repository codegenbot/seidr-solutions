vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if(!word.empty()){
        words.push_back(word);
    }
    
    if(words.size() == 0){
        int oddLowerCaseLetters = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddLowerCaseLetters++;
            }
        }
        words.push_back(to_string(oddLowerCaseLetters));
    }
    
    return words;
}