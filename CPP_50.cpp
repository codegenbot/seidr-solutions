#include <string>
#include <cassert>

string encode_shift(string s);
string decode_shift(string s);

void test_code() {
    string str = "input string";
    string encoded_str = encode_shift(str);
    assert(decode_shift(encoded_str) == str);
}