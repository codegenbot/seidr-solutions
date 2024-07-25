string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            c = (c - 'a' + 26) % 26 + 'a';
        } else if(c >= 'n' && c <= 'z'){
            c = (c - 'n' + 26) % 26 + 'n';
        }
        result += c;
    }
    return result;
}