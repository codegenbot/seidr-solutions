vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        }
        else if(c == ','){
            result.push_back(word);
            word = "";
            hasComma = true;
        }
        else{
            word += c;
        }
    }
    
    result.push_back(word);
    
    if(!hasWhitespace && !hasComma){
        int oddCount = 0;
        for(char c : word){
            if(islower(c)){
                int order = c - 'a';
                if(order % 2 != 0){
                    oddCount++;
                }
            }
        }
        result.clear();
        result.push_back(to_string(oddCount));
    }
    
    return result;
}