string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        int val1 = a[i] - '0';
        int val2 = b[i] - '0';
        int res = val1 ^ val2;
        result += (res == 1) ? "1" : "0";
    }
    return result;
}