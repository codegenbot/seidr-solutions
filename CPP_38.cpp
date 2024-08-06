string encode_cyclic(string decoded_str) {
    int len = decoded_str.length();
    string output;
    for (int i = 0; i * 3 < len; i++) {
        string str = decoded_str.substr(i * 3, 3);
        if (str.length() == 3) 
            str = str.substr(1, 2) + str[0];
        output += str;
    }
    return output;
}

string decode_cyclic(string encoded_str) { 
    int len = encoded_str.length();
    string output;
    for (int i = 0; i * 3 < len; i++) {
        string str = encoded_str.substr(i * 3, 3);
        if (str.length() == 3) 
            str = str[2] + str.substr(0, 2);
        output += str;
    }
    return output;
}