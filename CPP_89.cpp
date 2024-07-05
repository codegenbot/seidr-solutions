string encrypt(string s){
    string result = "";
    for(char c : s) {
        result += (c - 'a' + 4) % 26 + 'a';
    }
    return result;
}