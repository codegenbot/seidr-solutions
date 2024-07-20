string encrypt(string s){
    string result = "";
    for(int i=0; i<s.size(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'i') {
            c = (c - 'a' + 26) % 26 + 'a';
        } else if(c >= 'j' && c <= 'p') {
            c = (c - 'j' + 26) % 26 + 'j';
        }
        result += c;
    }
    return result;
}