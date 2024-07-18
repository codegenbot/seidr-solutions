string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + 2 * (c - 'a' + 1);
            if(isupper(c)){
                if(encrypted > 'Z'){
                    encrypted = 'A' + (encrypted - 'Z' - 1);
                }
            } else {
                if(encrypted > 'z'){
                    encrypted = 'a' + (encrypted - 'z' - 1);
                }
            }
            result += encrypted;
       a
        } else {
            result += c;
        }
    }
    return result;
}