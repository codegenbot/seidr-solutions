string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char newChar = c + 2 * (c >= 'a' ? 1 : -1);
            if(newChar > 'z' || newChar < 'a'){
                newChar = newChar - 26;
            }
            result += newChar;
        } else {
            result += c;
        }
    }
    return result;
}