vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasSpace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            hasSpace = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }else if(c == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }else{
            word += c;
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(!hasSpace && !hasComma){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c)){
                int order = c - 'a';
                if(order % 2 != 0){
                    oddCount++;
                }
            }
        }
        result.push_back(to_string(oddCount));
    }
    
    return result;
}