Here is the completed code:

string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (i >= b.size())
            result += a[i] ^ '0';
        else
            result += a[i] ^ b[i];
    }
    return result;
}