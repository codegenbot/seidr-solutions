string encrypt(string s){
    string encrypted = "";
    int shift = 2 * 2;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (isalpha(c)) {
            if (isupper(c)) {
                c = ((c - 'A' + shift) % 26) + 'A';
            } else {
                c = ((c - 'a' + shift) % 26) + 'a';
            }
        }
        encrypted += c;
    }

    return encrypted;
}