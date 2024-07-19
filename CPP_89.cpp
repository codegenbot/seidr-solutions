string encrypt(string s){
    string result = "";
    int shift = 2 * 2;
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + shift;
            if(islower(c) && encrypted > 'z') encrypted -= 26;
            if(isupper(c) && encrypted > 'Z') encrypted -= 26;
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}