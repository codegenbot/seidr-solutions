string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char base = isupper(c) ? 'A' : 'a';
            char encrypted_char = base + (c - base + 2 * 2) % 26;
            encrypted += encrypted_char;
        } else{
            encrypted += c;
        }
    }
    return encrypted;
}