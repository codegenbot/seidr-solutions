string encode_cyclic(string s) {
    int l = s.length();
    string encoded_str;
    for (int i = 0; i * 3 < l; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[1] + x.substr(0, 2);
        encoded_str += x;
    }
    return encoded_str;
}