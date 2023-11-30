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
        } else if(c == ','){
            hasComma = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if(word != ""){
        words.push_back(word);
    }
    
    if(hasWhitespace){
        return words;
    } else if(hasComma){
        return words;
    } else {
        words.clear();
        words.push_back(to_string(countOddLetters(txt)));
        return words;
    }
}

int countOddLetters(string txt){
    int count = 0;
    for(char c : txt){
        if(islower(c)){
            int letterOrder = c - 'a';
            if(letterOrder % 2 != 0){
                count++;
            }
        }
    }
    return count;
}