vector<string> split_words(string txt){
    vector<string> result;
    string word;
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.empty()){
        int count_odd = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                count_odd++;
            }
        }
        result.push_back(to_string(count_odd));
    }
    return result;
}