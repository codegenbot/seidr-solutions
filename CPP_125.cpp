vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            if(word != ""){
                result.push_back(word);
                word = "";
            }
            hasWhitespace = true;
        }
        else if(txt[i] == ','){
            if(word != ""){
                result.push_back(word);
                word = "";
            }
            hasComma = true;
        }
        else{
            word += txt[i];
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        result.push_back(to_string(count_odd_letters(txt)));
    }
    
    return result;
}

int count_odd_letters(string txt){
    int count = 0;
    for(int i = 0; i < txt.length(); i++){
        if(islower(txt[i]) && (txt[i] - 'a') % 2 == 1){
            count++;
        }
    }
    return count;
}