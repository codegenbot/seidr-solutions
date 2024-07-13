string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        }else{
            string temp = "";
            for(int j=i; j<s.length() && s[j] != ' '; j++){
                temp += s[j];
            }
            for(char c : temp){
                result += (char)tolower(c);
            }
            i += temp.length() - 1;
        }
    }
    return result;
}