vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for(char& c : txt){
        if(isalpha(c)){
            word += c;
        } else if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.empty()){
        int odd_count = 0;
        for(char& c : txt){
            if(islower(c) && (c - 'a') % 2 != 0){
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    }
    return result;
}