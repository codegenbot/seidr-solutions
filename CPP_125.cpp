vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhiteSpace = false;
    for(char c : txt){
        if(c == ' '){
            hasWhiteSpace = true;
            result.push_back(word);
            word = "";
        } else if(c == ','){
            hasWhiteSpace = true;
            result.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if(hasWhiteSpace){
        if(!word.empty()){
            result.push_back(word);
        }
    } else {
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 != 0){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    return result;
}