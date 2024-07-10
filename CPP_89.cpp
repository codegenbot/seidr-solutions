string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 26) % 26;
            result += (char)(c + 'a');
        } else if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 26) % 26;
            result += (char)(c + 'A');
        } else {
            result += c;
        }
    }
    return result;
}