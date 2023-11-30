vector<string> split_words(string txt){
    vector<string> words;
    int count = 0;
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
        }
        else if(txt[i] == ','){
            hasComma = true;
        }
    }
    
    if(hasWhitespace){
        string word = "";
        for(int i=0; i<txt.length(); i++){
            if(txt[i] == ' '){
                words.push_back(word);
                word = "";
            }
            else{
                word += txt[i];
            }
        }
        words.push_back(word);
    }
    else if(hasComma){
        string word = "";
        for(int i=0; i<txt.length(); i++){
            if(txt[i] == ','){
                words.push_back(word);
                word = "";
            }
            else{
                word += txt[i];
            }
        }
        words.push_back(word);
    }
    else{
        count = 0;
        for(int i=0; i<txt.length(); i++){
            if(islower(txt[i])){
                count++;
            }
        }
        words.push_back(to_string(count));
    }
    
    return words;
}