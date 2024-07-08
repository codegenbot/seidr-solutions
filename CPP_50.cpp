#include <string>
#include <cassert>

string encode_shift(string s);

string decode_shift(string s){
    string out;
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-5-(int)'a'+26)%26+(int)'a';   
        out=out+(char)w;
    }
    return out;
}

int main() {
    string str = "input_string"; // Example input
    string encoded_str = encode_shift(str);
    assert(decode_shift(encoded_str) == str);
    return 0;
}