vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        }
        else if(txt[i] == ','){
            result.push_back(word);
            word = "";
            hasComma = true;
        }
        else{
            word += txt[i];
        }
    }
    
    result.push_back(word);
    
    if(hasWhitespace || hasComma){
        return result;
    }
    else{
        result.clear();
        result.push_back(to_string(countOddLetters(txt)));
        return result;
    }
}

int countOddLetters(string txt){
    int count = 0;
    for(int i = 0; i < txt.length(); i++){
        if(islower(txt[i]) && (((int)txt[i] - 97) % 2 == 1)){
            count++;
        }
    }
    return count;
}