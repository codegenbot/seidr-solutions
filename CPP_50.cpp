string decode_shift(string s){
    string out;
    int i;
    for (i=0;i<s.length();i++) {
        int w = ((int)s[i]) - (int)'a' + 5) % 26 + (int)'a';
        out=out+(char)w;
    }
    return out;