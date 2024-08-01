Here is the completed code:

string string_xor(string a, string b) {
    string result;
    for (int i = 0; i < a.length(); i++) {
        int val1 = a[i] - '0';
        int val2 = b[i] - '0';
        if ((val1 ^ val2) == 1)
            result += "1";
        else
            result += "0";
    }
    return result;
}