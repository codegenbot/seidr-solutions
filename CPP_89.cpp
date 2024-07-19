string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = (ch - 'a' + 2*2) % 26 + 'a';
        } else if(ch >= 'A' && ch <= 'Z'){
            ch = (ch - 'A' + 2*2) % 26 + 'A';
        }
        result += ch;
    }
    return result;
}