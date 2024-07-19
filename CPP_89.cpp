string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(c >= 'a' && c <= 'z'){
            encrypted += char((c - 'a' + 2 * 2) % 26 + 'a');
        } else if(c >= 'A' && c <= 'Z'){
            encrypted += char((c - 'A' + 2 * 2) % 26 + 'A');
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}