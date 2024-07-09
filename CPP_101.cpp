vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(char c : s){
        if(c == ' ' || c == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}