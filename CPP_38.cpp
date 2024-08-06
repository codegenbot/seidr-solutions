string encode_cyclic(string str) {
    int len = str.length();
    string encoded_str;
    for (int i = 0; i * 3 < len; i++) {
        string substr = str.substr(i * 3, 3);
        if (substr.length() == 3) 
            substr = substr[1] + substr[2] + substr[0];
        encoded_str += substr;
    }
    return encoded_str;
}

string decode_cyclic(string encoded_str) {
    int len = encoded_str.length();
    string output;
    for (int i = 0; i * 3 < len; i++) {
        string substr = encoded_str.substr(i * 3, 3);
        if (substr.length() == 3) 
            substr = substr[2] + substr.substr(0, 2);
        output += substr;
    }
    return output;
}