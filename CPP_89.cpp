string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            char c = s[i] + 2 * 2; // Shift the character down by two multiplied to two places
            if(c > 'z'){ // Wrap around if the character exceeds 'z'
                c = c - 'z' + 'a' - 1;
            }
            encrypted += c;
        }
    }
    return encrypted;
}