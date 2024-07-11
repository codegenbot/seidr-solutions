string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted_char = 'a' + (c - 'a' + 2*2) % 26;
            result += encrypted_char;
        } else {
            result += c;
        }
    }
    return result;
}