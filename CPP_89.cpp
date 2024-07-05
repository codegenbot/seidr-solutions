string encrypt(string s){
    for(char &c : s){
        c = ((c - 'a' + 4) % 26) + 'a';
    }
    return s;
}