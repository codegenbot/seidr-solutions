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

    if(hasWhitespace || hasComma){
        if(word != ""){
            words.push_back(word);
        }
    }
    else{
        int count = 0;
        for(int i = 0; i < word.length(); i++){
            if(islower(word[i])){
                count++;
            }
        }
        words.push_back(to_string(count));
    }

    return words;
}