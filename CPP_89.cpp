string encrypt(string s){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string encrypted = "";
    for (char c : s){
        if(isalpha(c)){
            int shift = (c - 'a') + 2 * 2;
            shift = shift % 26;
            encrypted += alphabet[shift];
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}