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
        int oddCount = 0;
        for(int i = 0; i < word.length(); i++){
            int letterIndex = tolower(word[i]) - 'a';
            if(letterIndex % 2 != 0){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    
    return result;
}