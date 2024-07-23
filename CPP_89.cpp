string encrypt(string s){
    string result = "";
    int shift = 2 * 2; // Two places down
    for(char c : s){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            result += (char)(((c - base + shift) % 26) + base);
        } else {
            result += c;
        }
    }
    return result;
}