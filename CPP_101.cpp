vector<string> words_string(string s){
    vector<string> result;
    string word = "";
    for(char c : s){
        if(isalpha(c) || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
            if(c != ',')word += c;
        } else if(c == ' '){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }
    }
    if(!word.empty())result.push_back(word);
    return result;
}