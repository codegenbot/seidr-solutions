Here is the completed code:

string string_xor(string a, string b) {
    string result;
    for (int i = 0; i < a.length(); i++) {
        char c = (a[i] - '0' ^ b[i] - '0') + '0';
        result += c;
    }
    return result;
}