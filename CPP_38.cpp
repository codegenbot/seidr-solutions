#include <string>
#include <cassert>

string encode_cyclic(string s){
    string encoded_str;
    // implementation of encode_cyclic function
    return encoded_str;
}

string decode_cyclic(string s){
    string output;
    string str;
    for (char chr : s) {
        string temp;
        temp+=chr;
        str+=temp;
    }

    string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);

    int l = s.length();
    int num = (l + 2) / 3;
    for (int i = 0; i < num; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}