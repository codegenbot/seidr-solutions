vector<string> split_words(string txt){
    vector<string> words;
    string temp = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!temp.empty()){
                words.push_back(temp);
                temp = "";
            }
        } else {
            temp += c;
        }
    }
    if(!temp.empty()){
        words.push_back(temp);
    }
    if(words.size() == 0){
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        words.push_back(to_string(count));
    }
    return words;
}