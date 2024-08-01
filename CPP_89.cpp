string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length();i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            result += (char)((c - 'a' + 8) % 26 + 'a');
        }
        else if(c >= 'n' && c <= 'z'){
            result += (char)((c - 'n' + 6) % 26 + 'n');
        }
        else{
            result += c;
        }
    }
    return result;
}