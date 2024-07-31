string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char shifted = (c - 'a' + 2*2) % 26 + 'a';
            result += shifted;
        } else {
            result += c;
        }
    }
    return result;
}