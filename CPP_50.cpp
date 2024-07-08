#include <string>
#include <cassert>

using namespace std;

string encode_shift(string s) {
    // Your implementation for encoding shift
}

string decode_shift(string s) {
    // Your implementation for decoding shift
}

void test_code() {
    string str = "input string";
    string encoded_str = encode_shift(str);
    assert(decode_shift(encoded_str) == str);
}