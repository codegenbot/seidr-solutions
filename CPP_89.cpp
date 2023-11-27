string encrypt(string s){
    string encrypted = "";
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(isalpha(c)){
            int ascii = (int)c;
            int shifted = ascii + (2 * 2);
            if(isupper(c)){
                if(shifted > 90){
                    shifted = (shifted % 90) + 64;
                }
            } else {
                if(shifted > 122){
                    shifted = (shifted % 122) + 96;
                }
            }
            encrypted += (char)shifted;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}