string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            c = (c - 'a' + 2) % 26 + 'a';
        }else if(c >= 'n' && c <= 'z'){
            c = (c - 'n' + 14) % 26 + 'n';
        }
        result += c;
    }
    return result;
}