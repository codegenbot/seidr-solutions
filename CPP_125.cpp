vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    
    for(char c : txt){
        if(c == ' '){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        }
        else if(c == ','){
            result.push_back(word);
            word = "";
        }
        else{
            word += c;
        }
    }
    
    if(!hasWhitespace && word.empty()){
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    else{
        result.push_back(word);
    }
    
    return result;
}