Here is the completed code:

string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        int xored = a[i] - '0' ^ b[i] - '0';
        result += (xored % 2 == 0 ? "0" : "1");
    }
    return result;
}