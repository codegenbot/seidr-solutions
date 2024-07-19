string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char base = isupper(s[i]) ? 'A' : 'a';
            char encrypted_char = (((s[i] - base) + 2) * 2) % 26 + base;
            result += encrypted_char;
        } else {
            result += s[i];
        }
    }
    return result;
}