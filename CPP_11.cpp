Here is the completed code:

string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';
        int xorBit = bitA ^ bitB;
        char xorChar = xorBit + '0';
        result += xorChar;
    }
    return result;
}