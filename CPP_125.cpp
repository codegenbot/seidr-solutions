vector<string> split_words(string txt){
    vector<string> res;
    string word = "";
    bool isWhitespace = false;
    bool isComma = false;
    
    for(char c : txt){
        if(c == ' '){
            isWhitespace = true;
            if(!word.empty()){
                res.push_back(word);
                word = "";
            }
        }else if(c == ','){
            isComma = true;
            if(!word.empty()){
                res.push_back(word);
                word = "";
            }
        }else{
            word += c;
        }
    }
    
    if(isWhitespace){
        if(!word.empty()){
            res.push_back(word);
        }
        return res;
    }else if(isComma){
        if(!word.empty()){
            res.push_back(word);
        }
        return res;
    }else{
        int count = 0;
        for(char c : txt){
            if(islower(c)){
                count++;
            }
        }
        res.push_back(to_string(count));
        return res;
    }
}