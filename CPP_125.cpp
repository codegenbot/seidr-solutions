vector<string> split_words(string txt){
    vector<string> result;
    string word;
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }
        else if(c == ','){
            hasComma = true;
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += c;
        }
    }
    
    if(!word.empty()){
        result.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c)){
                oddCount += (c - 'a') % 2;
            }
        }
        result.push_back(to_string(oddCount));
    }
    
    return result;
}