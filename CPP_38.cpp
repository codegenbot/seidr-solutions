string encode_cyclic(string s){
    int l = s.length();
    string output;
    for(int i = 0; i < l; i++){
        char chr = s[i];
        if(chr >= 'a' && chr <= 'z'){
            chr = (chr - 'a' + 1) % 26 + 'a';
        }
        output += chr;
    }
    return output;
}