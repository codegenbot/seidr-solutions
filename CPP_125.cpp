vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }else if(c == ','){
            hasComma = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }else{
            word += c;
        }
    }
    
    if(word != ""){
        words.push_back(word);
    }
    
    if(words.empty()){
        words.push_back(to_string(count_odd_letters(txt)));
    }
    
    return words;
}