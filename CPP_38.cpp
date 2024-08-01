string encode_cyclic(string str) {
    string output;
    int l = str.length();
    for (int i = 0; i < l; i += 3) {
        string x = str.substr(i, min(3, l - i));
        if (x.length() == 3) x = x.substr(1, 2) + x[0];
        output += x;
    }
    return output;
}

string decode_cyclic(string s) { 
    int l = s.length();
    string x, output;
    for (int i = 0; i * 3 < l; i++)
    {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

int main() {
    string str = "your_input_string_here";
    string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    return 0;
}