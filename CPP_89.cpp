string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'i'){
            c = (c - 'a' + 26) % 26 + 'a';
        } else if(c >= 'j' && c <= 'o'){
            c = (c - 'j' + 26) % 26 + 'j';
        } else if(c >= 'p' && c <= 'x'){
            c = (c - 'p' + 26) % 26 + 'p';
        } else if(c >= 'y' && c <= 'z'){
            c = (c - 'y' + 26) % 26 + 'y';
        }
        result += c;
    }
    return result;
}