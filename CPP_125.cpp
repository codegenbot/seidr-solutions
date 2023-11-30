vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else if(txt[i] == ','){
            hasComma = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }
    
    if(word != ""){
        words.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        words.push_back(to_string(count_odd_letters(txt)));
    }
    
    return words;
}

int count_odd_letters(string txt){
    int count = 0;
    for(int i = 0; i < txt.length(); i++){
        if(islower(txt[i]) && (txt[i] - 'a') % 2 != 0){
            count++;
        }
    }
    return count;
}