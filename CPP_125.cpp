vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    
    for(char c : txt){
        if(c == ' '){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        } else if(c == ','){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        } else {
            word += c;
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(result.size() == 1 && !hasWhitespace){
        int oddLowercaseCount = 0;
        for(char c : result[0]){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddLowercaseCount++;
            }
        }
        result[0] = to_string(oddLowercaseCount);
    }
    
    return result;
}