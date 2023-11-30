vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for(char c : txt){
        if(c == ' '){
            result.push_back(word);
            word = "";
        }
        else{
            word += c;
        }
    }
    if(word != ""){
        result.push_back(word);
    }
    if(result.empty()){
        result.push_back(to_string(26));
    }
    return result;
}