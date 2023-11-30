vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else if(txt[i] == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        string count = to_string(count_odd_letters(txt));
        result.push_back(count);
    }
    
    return result;
}

int count_odd_letters(string txt){
    int count = 0;
    for(int i = 0; i < txt.length(); i++){
        if(islower(txt[i])){
            int letterOrder = txt[i] - 'a';
            if(letterOrder % 2 != 0){
                count++;
            }
        }
    }
    return count;
}