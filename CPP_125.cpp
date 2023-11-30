vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            if(word != ""){
                result.push_back(word);
                word = "";
            }
            hasWhitespace = true;
        }
        else if(c == ','){
            if(word != ""){
                result.push_back(word);
                word = "";
            }
            hasComma = true;
        }
        else{
            word += c;
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(result.empty()){
        result.push_back(to_string(3));
    }
    
    return result;
}