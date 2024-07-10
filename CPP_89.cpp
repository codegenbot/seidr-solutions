string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(ch >= 'a' && ch <= 'm'){
            result += (ch - ('a' - 1)) % 26 + 'a';
        }
        else if(ch >= 'n' && ch <= 'z'){
            result += (ch - ('n' - 2)) % 26 + 'a';
        }
        else{
            result += ch;
        }
    }
    return result;
}