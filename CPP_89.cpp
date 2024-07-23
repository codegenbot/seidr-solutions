string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + (2 * (c >= 'a' ? 1 : -1));
            if((islower(c) && encrypted > 'z') || (isupper(c) && encrypted > 'Z')){
                encrypted -= 26;
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}