string anti_shuffle(string s){
    string result = "";
    for(size_t i=0; i<s.size(); i++){
        if(s[i] == ' '){
            result += ' ';
            continue;
        }
        string word = "";
        for(size_t j=i; j<s.size() && s[j] != ' '; j++){
            word += s[j];
        }
        i = j - 1;
        sort(word.begin(), word.end());
        result += word;
    }
    return result;
}