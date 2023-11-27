string encrypt(string s){
    string encrypted = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            int ascii = s[i] - 'a';
            int encryptedAscii = (ascii + (2 * 2)) % 26;
            encrypted += char(encryptedAscii + 'a');
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            int ascii = s[i] - 'A';
            int encryptedAscii = (ascii + (2 * 2)) % 26;
            encrypted += char(encryptedAscii + 'A');
        }
        else{
            encrypted += s[i];
        }
    }
    return encrypted;
}