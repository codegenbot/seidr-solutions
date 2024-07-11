string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + 2 * ('z' - c >= 2 ? 2 : -24);
            if(!isalpha(encrypted)){
                encrypted -= 26;
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}