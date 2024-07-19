string encrypt(string s){
    string result = "";
    for(char c : s) {
        if(isalpha(c)) {
            char encrypted = islower(c) ? 'a' + (c - 'a' + 2 * 2) % 26 : 'A' + (c - 'A' + 2 * 2) % 26;
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}