string string_xor(string a, string b) {
    string result = "";
    for(int i=0; i<a.length(); i++) {
        if(a[i] == '1' && b[i] == '1')
            result += '0';
        else if(a[i] == '0' && b[i] == '0')
            result += '0';
        else
            result += '1';
    }
    return result;
}