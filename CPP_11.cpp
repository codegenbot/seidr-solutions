string string_xor(string a, string b) {
    string result;
    for(int i = 0; i < a.length(); i++) {
        char c1 = a[i];
        char c2 = (i < b.length()) ? b[i] : '0';
        if(c1 == '0' && c2 == '0')
            result += '0';
        else if(c1 == '0' || c2 == '0')
            result += '1';
        else
            result += '0';
    }
    return result;
}