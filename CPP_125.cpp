vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            words.push_back(word);
            word = "";
        } else if(c == ','){
            hasWhitespace = true;
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    if(!hasWhitespace){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        words.push_back(to_string(oddCount));
    }
    return words;
}