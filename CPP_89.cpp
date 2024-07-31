string encrypt(string s){
    string encrypted;
    for(char c : s){
        if(isalpha(c)){
            char start = islower(c) ? 'a' : 'A';
            encrypted += start + (c - start + 2 * (c - start));
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}