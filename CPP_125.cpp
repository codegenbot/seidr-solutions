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
        string oddLettersCount = to_string(count_if(txt.begin(), txt.end(), [](char c){ return islower(c) && (c - 'a') % 2 == 1; }));
        words.push_back(oddLettersCount);
    }
    
    return words;
}