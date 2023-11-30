string anti_shuffle(string s){
    string ordered_str = "";
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            sort(word.begin(), word.end());
            ordered_str += word + ' ';
            word = "";
        }
        else{
            word += s[i];
        }
    }
    sort(word.begin(), word.end());
    ordered_str += word;
    return ordered_str;
}