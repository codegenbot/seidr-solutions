string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted_char = (c - 'a' + 2 * 2) % 26 + 'a';
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}