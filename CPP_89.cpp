string encrypt(string s){
    string encrypted = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(isalpha(c)){
            if(islower(c)){
                c = 'a' + (c - 'a' + 2 * 2) % 26;
            } else {
                c = 'A' + (c - 'A' + 2 * 2) % 26;
            }
        }
        encrypted += c;
    }
    return encrypted;
}