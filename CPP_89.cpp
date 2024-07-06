char convertChar(char c) {
    if (c >= 'a' && c <= 'm') return c + 4;
    if (c >= 'n' && c <= 'z') return c - 2;
    return c;
}

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        result += convertChar(c);
    }
    return result;
}