string encrypt(string s){
    string encryptedString = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 2*2) % 26 + 'a';
        }
        encryptedString += c;
    }
    return encryptedString;
}