vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    for(char c : txt){
        if(c == ' '){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
            hasWhitespace = true;
        } else if(c == ','){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
            hasWhitespace = true;
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    if(words.empty() && !hasWhitespace){
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        words.push_back(to_string(count));
    }
    return words;
}