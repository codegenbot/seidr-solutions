vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    
    for(char c : txt){
        if(c == ',' || c == ' '){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if(!word.empty()){
        result.push_back(word);
    }
    
    if(result.size() == 0){
        int count_odd_lowercase = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 != 0){
                count_odd_lowercase++;
            }
        }
        result.push_back(to_string(count_odd_lowercase));
    }
    
    return result;
}