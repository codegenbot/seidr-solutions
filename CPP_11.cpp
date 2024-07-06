string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        int x = (a[i] - '0');
        int y = (b[i] - '0');
        result += ((x ^ y) + '0');
    }
    return result;
}