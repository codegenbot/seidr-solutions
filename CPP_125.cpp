vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()) result.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if(!word.empty()) result.push_back(word);
    if(result.size() == 0) result.push_back(to_string(count_if(txt.begin(), txt.end(), [](char c){ return islower(c) && (c - 'a') % 2 == 1; })));
    return result;
}