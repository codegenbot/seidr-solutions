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
        }
        else if(c == ','){
            hasComma = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += c;
        }
    }
    
    if(word != ""){
        words.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        words = {to_string(countOddLetters(txt))};
    }
    
    return words;
}

int countOddLetters(string txt){
    int count = 0;
    for(char c : txt){
        if(islower(c)){
            int order = c - 'a';
            if(order % 2 != 0){
                count++;
            }
        }
    }
    return count;
}