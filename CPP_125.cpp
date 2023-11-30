vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' '){
            result.push_back(word);
            word = "";
            hasWhitespace = true;
        }
        else if(txt[i] == ','){
            result.push_back(word);
            word = "";
            hasComma = true;
        }
        else{
            word += txt[i];
        }
    }
    
    result.push_back(word);
    
    if(!hasWhitespace && !hasComma){
        string count = to_string(count_odd_letters(word));
        result.clear();
        result.push_back(count);
    }
    
    return result;
}

int count_odd_letters(string word){
    int count = 0;
    for(int i=0; i<word.length(); i++){
        if(islower(word[i])){
            int letterOrder = word[i] - 'a';
            if(letterOrder % 2 == 1){
                count++;
            }
        }
    }
    return count;
}