vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool isAlpha = false;
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else if(isalpha(c)){
            isAlpha = true;
            word += c;
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    if(words.empty()){
        words.push_back(to_string(count_odd_letters(txt)));
    }
    return words;
}