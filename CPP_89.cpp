string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(ch >= 'a' && ch <= 'i'){
            ch = (ch - 'a' + 26) % 26 + 'a';
        } else if(ch >= 'j' && ch <= 'o'){
            ch = (ch - 'j' + 26) % 26 + 'j';
        } else if(ch >= 'p' && ch <= 'x'){
            ch = (ch - 'p' + 26) % 26 + 'p';
        } else if(ch >= 'y' && ch <= 'z'){
            ch = (ch - 'y' + 26) % 26 + 'y';
        }
        result += ch;
    }
    return result;
}