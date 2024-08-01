string encode_cyclic(string str) {
    string output;
    for (int i = 0; i < str.length(); i += 3) {
        string x = str.substr(i, min(3, (int)str.length() - i));
        if (x.length() == 3) {
            x = x.substr(1, 2) + x[0];
        }
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