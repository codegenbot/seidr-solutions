string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + 2 * 2;
            if(isupper(c)){
                if(encrypted > 'Z') encrypted -= 26;
            } else {
                if(encrypted > 'z') encrypted -= 26;
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}