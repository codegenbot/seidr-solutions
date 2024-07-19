string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(isalpha(c)){
            int shift = 2 * (c - 'a');
            char encrypted_char = 'a' + (c - 'a' + shift) % 26;
            encrypted += encrypted_char;
        }
    }
    return encrypted;
}