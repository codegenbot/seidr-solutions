vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;

    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else if(c == ','){
            hasComma = true;
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += c;
        }
    }

    if(word != ""){
        words.push_back(word);
    }

    if(!hasWhitespace && !hasComma){
        string num = to_string(count_if(txt.begin(), txt.end(), [](char c){ return islower(c); }));
        words.push_back(num);
    }

    return words;
}