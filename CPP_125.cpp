vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' ' || txt[i] == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }
    
    if(word != ""){
        words.push_back(word);
    }
    
    if(words.empty()){
        int count = 0;
        for(int i = 0; i < txt.length(); i++){
            if(islower(txt[i]) && (txt[i] - 'a') % 2 != 0){
                count++;
            }
        }
        words.push_back(to_string(count));
    }
    
    return words;
}