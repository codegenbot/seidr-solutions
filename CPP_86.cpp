string anti_shuffle(string s){
    string res = "";
    string word = "";
    for(char c : s){
        if(c == ' '){
            sort(word.begin(), word.end());
            res += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    sort(word.begin(), word.end());
    res += word;
    return res;
}