string encode_cyclic(string str) {
    string encoded_str;
    for (int i = 0; i < str.length(); i++) {
        encoded_str += str[i] + str[(i + 2) % str.length()] + str[(i + 1) % str.length()];
    }
    return encoded_str;
}

string decode_cyclic(string encoded_str) { 
    string output;
    for (int i = 0; i * 3 < encoded_str.length(); i++) {
        string str = encoded_str.substr(i * 3, 3);
        if (str.length() == 3) 
            str = str[2] + str.substr(0, 2);
        output += str[2] + str.substr(0, 2);
    }
    return output;
}