string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        int xora = (a[i] - '0') ^ (b[i] - '0');
        if (xora == 1)
            result += "1";
        else
            result += "0";
    }
    return result;
}