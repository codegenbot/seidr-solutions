string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        char encrypted_char = c + 2*2;
        if(encrypted_char > 'z'){
            encrypted_char = 'a' + (encrypted_char - 'z' - 1);
        }
        encrypted += encrypted_char;
    }
    return encrypted;
}