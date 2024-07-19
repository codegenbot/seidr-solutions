vector<string> split_words(string txt){
    if(txt.find(' ') != string::npos){
        vector<string> words;
        string word;
        for(char c : txt){
            if(c == ' '){
                words.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        if(!word.empty()){
            words.push_back(word);
        }
        return words;
    } else if(txt.find(',') != string::npos){
        vector<string> words;
        string word;
        for(char c : txt){
            if(c == ','){
                words.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        if(!word.empty()){
            words.push_back(word);
        }
        return words;
    } else {
        vector<string> result;
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && ((c-'a') % 2 != 0)){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
        return result;
    }
}