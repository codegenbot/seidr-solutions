string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += " ";
            continue;
        }
        string word = s.substr(i);
        string new_word = "";
        for(int j=0; j<word.length(); j++){
            new_word += to_string(word[j]);
        }
        sort(new_word.begin(), new_word.end());
        result += new_word;
    }
    return result;
}