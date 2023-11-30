vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }else if(c == ','){
            hasComma = true;
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }else{
            word += c;
        }
    }

    if(hasWhitespace || hasComma){
        if(!word.empty()){
            words.push_back(word);
        }
    }else{
        string oddLetterCount = to_string(count_if(txt.begin(), txt.end(), [](char c){ return islower(c) && (c - 'a') % 2 != 0; }));
        words.push_back(oddLetterCount);
    }
    
    return words;
}