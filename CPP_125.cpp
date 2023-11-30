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
    
    if(!hasWhitespace && !hasComma){
        words = {to_string(count_odd_lowercase_letters(txt))};
    }
    
    return words;
}

int count_odd_lowercase_letters(string txt){
    int count = 0;
    for(char c : txt){
        if(islower(c)){
            if((c - 'a') % 2 != 0){
                count++;
            }
        }
    }
    return count;
}