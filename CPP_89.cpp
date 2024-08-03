string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z'){
            int pos = (int)ch - 97;
            pos = (pos + 2*2)%26;
            ch = (char)(pos+97);
        } else if(ch >= 'A' && ch <= 'Z'){
            int pos = (int)ch - 65;
            pos = (pos + 2*2)%26;
            ch = (char)(pos+65);
        }
        result += ch;
    }
    return result;
}