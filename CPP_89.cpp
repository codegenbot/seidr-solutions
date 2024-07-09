string encrypt(string s){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int n = alphabet.length();
    for(int i=0; i<s.length(); i++){
        char c = tolower(s[i]);
        if(c >= 'a' && c <= 'z'){
            int pos = alphabet.find(c);
            if(pos != -1){
                int newpos = (pos + 2*n) % n;
                s[i] = alphabet[newpos];
            }
        }
    }
    return s;
}