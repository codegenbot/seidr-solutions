vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    for(char c : txt){
        if(c == ' '){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
            hasWhitespace = true;
        } else if(c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
            hasWhitespace = true;
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    
    if(result.empty()){
        string numOdd = to_string(count_if(txt.begin(), txt.end(), [](char c){return islower(c) && (c - 'a') % 2 == 1;}));
        result.push_back(numOdd);
    }

    return result;
}