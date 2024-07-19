string encrypted = "";
    for(char c: s){
        if(isalpha(c)){
            int shift = 2 * (c - 'a');
            char encrypted_char = 'a' + (c - 'a' + shift) % 26;
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}