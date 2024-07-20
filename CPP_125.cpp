vector<string> split_words(string txt){
    vector<string> result;
    string word;
    for(char c : txt){
        if(isalpha(c)){
            word += c;
        } else if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word.clear();
            }
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.empty()){
        int odd_lower_case = 0;
        for(char c : txt){
            if(islower(c) && (c-'a') % 2 == 1){
                odd_lower_case++;
            }
        }
        result.push_back(to_string(odd_lower_case));
    }
    return result;
}