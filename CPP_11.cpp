string string_xor(string a, string b) {
    string result;
    for(int i = 0; i < a.length(); i++) {
        if(i >= b.length()) 
            result.push_back(a[i] - '0');
        else
            result.push_back((a[i] - '0') ^ (b[i] - '0') + '0');
    }
    return result;
}