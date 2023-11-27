vector<string> split_words(string txt){
    vector<string> result;
    string current_word = "";
    bool has_whitespace = false;
    bool has_comma = false;
    
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' '){
            has_whitespace = true;
            if(current_word != ""){
                result.push_back(current_word);
                current_word = "";
            }
        }
        else if(txt[i] == ','){
            has_comma = true;
            if(current_word != ""){
                result.push_back(current_word);
                current_word = "";
            }
        }
        else{
            current_word += txt[i];
        }
    }
    
    if(current_word != ""){
        result.push_back(current_word);
    }
    
    if(!has_whitespace && !has_comma){
        result.push_back(to_string(count_odd_letters(txt)));
    }
    
    return result;
}