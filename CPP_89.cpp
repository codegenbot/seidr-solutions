string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 26) % 26;
            c += 'a';
        } else if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 26) % 26;
            c += 'A';
        }
        result += c;
    }
    return result;
}