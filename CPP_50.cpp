#include <string>
#include <cassert>

std::string encode_shift(std::string s);

void test_code() {
    std::string str = "input string";
    std::string encoded_str = encode_shift(str);
    assert(decode_shift(encoded_str) == str);
}