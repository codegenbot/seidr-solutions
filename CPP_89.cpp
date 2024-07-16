string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char encrypted = s[i] + 2 * 2;
            if(islower(s[i])){
                if(encrypted > 'z'){
                    encrypted = 'a' + (encrypted - 'z' - 1);
                }
            } else {
                if(encrypted > 'Z'){
                    encrypted = 'A' + (encrypted - 'Z' - 1);
                }
            }
            result += encrypted;
        } else {
            result += s[i];
        }
    }
    return result;
}