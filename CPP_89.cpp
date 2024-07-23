string encrypt(string s){
    string result = "";
    int shift = 2 * 2;
    for(char c : s){
        if(c >= 'a' && c <= 'z'){
            char encrypted = 'a' + (c - 'a' + shift) % 26;
            result += encrypted;
        }
    }
    return result;
}