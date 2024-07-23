string encrypt(string s){
    string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char encrypted_char = ((c - base + 2 * 2) % 26) + base;
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}