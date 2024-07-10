string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < max(a.length(), b.length()); i++) {
        char c1 = a[i] - '0', c2 = (i >= b.length()) ? 0 : b[i] - '0';
        result += (c1 ^ c2) + '0';
    }
    return result;
}