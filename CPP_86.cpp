string anti_shuffle(string s){
    string result = "";
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        }
        else{
            word += s[i];
        }
    }
    sort(word.begin(), word.end());
    result += word;
    return result;
}