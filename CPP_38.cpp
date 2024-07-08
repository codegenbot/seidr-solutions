string encode_cyclic(string s) {
    string encoded_str;
    int l = s.length();
    for (int i = 0; i * 3 < l; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) {
            x = x.substr(1) + x[0];
        }
        encoded_str += x;
    }
    return encoded_str;
}