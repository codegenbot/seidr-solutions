string anti_shuffle(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
            continue;
        }
        char c = s[i];
        while(i < s.length() && s[i] <= c){
            c = s[i++];
        }
        while(c >= 'a' && c <= 'z'){
            result += c;
            c++;
        }
    }
    return result;
}