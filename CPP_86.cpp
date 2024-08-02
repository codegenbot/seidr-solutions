string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        } else {
            char c = s[i];
            while(c != ' ' && i < s.length()){
                c = min(c, s[i]);
                i++;
            }
            result += c;
        }
    }
    return result;
}