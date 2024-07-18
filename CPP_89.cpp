string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            if(islower(c)){
                encrypted += 'a' + (c - 'a' + 2 * 2) % 26;
            } else {
                encrypted += 'A' + (c - 'A' + 2 * 2) % 26;
            }
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}