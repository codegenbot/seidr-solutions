vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
        }
        else if(txt[i] == ','){
            hasComma = true;
        }
        else{
            word += txt[i];
        }
        
        if((hasWhitespace && txt[i] == ' ') || (hasComma && txt[i] == ',')){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
    }
    
    if(word != ""){
        words.push_back(word);
    }
    
    if(words.empty()){
        string num = to_string(26);
        words.push_back(num);
    }
    
    return words;
}