string encrypt(string s){
    for(char &c : s){
        c = 'a' + (c - 'a' + 4) % 26;
    }
    return s;
}