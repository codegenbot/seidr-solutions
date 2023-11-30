vector<string> split_words(string txt){
    vector<string> result;
    string word;
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' ' || txt[i] == ','){
            if(!word.empty()){
                result.push_back(word);
                word.clear();
            }
        }
        else{
            word += txt[i];
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.empty()){
        result.push_back(to_string(3));
    }
    return result;
}