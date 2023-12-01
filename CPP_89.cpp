string encrypt(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c += (2 * 2);
            if(c > 'z'){
                c -= 26;
            }
        }
        result += c;
    }
    return result;
}