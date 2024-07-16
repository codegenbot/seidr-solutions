vector<string> split_words(string txt){
    vector<string> result;
    string temp = "";
    bool hasWhitespace = false;
    
    for(char c : txt){
        if(c == ' '){
            result.push_back(temp);
            temp = "";
            hasWhitespace = true;
        } else if(c == ','){
            result.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    
    if(hasWhitespace || result.size() == 0){
        result.push_back(temp);
    } else {
        int oddCount = 0;
        for(char c : temp){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    
    return result;
}