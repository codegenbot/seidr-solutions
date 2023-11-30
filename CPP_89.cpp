string encrypt(string s){
    string encrypted = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(isalpha(c)){
            int asciiValue = c;
            int shiftedAscii = asciiValue + (2 * 2);
            if(isupper(c)){
                if(shiftedAscii > 90){
                    shiftedAscii = 65 + (shiftedAscii - 91);
                }
            } else {
                if(shiftedAscii > 122){
                    shiftedAscii = 97 + (shiftedAscii - 123);
                }
            }
            encrypted += (char)shiftedAscii;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}