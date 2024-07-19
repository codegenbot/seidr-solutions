string encrypt(string s){
    string encrypted = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            encrypted += (c - base + 2*2) % 26 + base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}