vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
        }else if(txt[i] == ','){
            hasComma = true;
        }else{
            word += txt[i];
        }
    }
    
    if(hasWhitespace){
        string delimiter = " ";
        size_t pos = 0;
        while ((pos = word.find(delimiter)) != string::npos) {
            string token = word.substr(0, pos);
            words.push_back(token);
            word.erase(0, pos + delimiter.length());
        }
        words.push_back(word);
    }else if(hasComma){
        string delimiter = ",";
        size_t pos = 0;
        while ((pos = word.find(delimiter)) != string::npos) {
            string token = word.substr(0, pos);
            words.push_back(token);
            word.erase(0, pos + delimiter.length());
        }
        words.push_back(word);
    }else{
        int count = 0;
        for(int i = 0; i < word.length(); i++){
            if(islower(word[i])){
                count++;
            }
        }
        words.push_back(to_string(count));
    }
    
    return words;
}