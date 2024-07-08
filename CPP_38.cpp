string encode_cyclic(string s) {
    int l = s.length();
    string encoded_str;
    for (int i = 0; i * 3 < l; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) {
            x = x[1] + x[2] + x[0];
        }
        encoded_str.append(x);
    }
    return encoded_str;
}