string anti_shuffle(string s){
    string res = "";
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            res += ' ';
        }else{
            string word;
            for(size_t j = i; j < s.size() && s[j] != ' '; j++){
                word += s[j];
            }
            i = j - 1;
            string new_word;
            for(auto c : word){
                new_word += (char)(c);
            }
            res += new_word + ' ';
        }
    }
    return res.substr(0, res.size() - 1);
}