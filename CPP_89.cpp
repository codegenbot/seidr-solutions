string encrypt(string s){
    string result = "";
    int shift = 2 * 2;
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + shift;
            if(islower(c) && encrypted > 'z'){
                encrypted = 'a' + (encrypted - 'z' - 1);
            }
            else if(isupper(c) && encrypted > 'Z'){
                encrypted = 'A' + (encrypted - 'Z' - 1);
            }
            result += encrypted;
        }
        else{
            result += c;
        }
    }
    return result;
}