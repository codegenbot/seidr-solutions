vector<string> split_words(string txt){
    vector<string> words;
    string word;
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    if(words.empty()){
        int count_odd_lowercase = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 != 0){
                count_odd_lowercase++;
            }
        }
        words.push_back(to_string(count_odd_lowercase));
    }
    return words;
}