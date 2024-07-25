vector<string> res;
    string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                res.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        res.push_back(word);
    }
    if(res.empty()){
        int odd_lowercase_count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                odd_lowercase_count++;
            }
        }
        res.push_back(to_string(odd_lowercase_count));
    }
    return res;
}