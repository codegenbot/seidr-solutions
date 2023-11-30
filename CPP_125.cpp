vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            result.push_back(word);
            word = "";
        }
        else if(txt[i] == ','){
            result.push_back(word);
            word = "";
        }
        else{
            word += txt[i];
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(result.empty()){
        result.push_back(to_string(3));
    }
    
    return result;
}