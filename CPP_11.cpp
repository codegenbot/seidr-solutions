#include <string>
#include <cassert>

string string_xor(string a, string b) {
    string result;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == b[i]) {
            result += '0';
        }
        else {
            result += '1';
        }
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    // additional test cases
    assert(string_xor("1010", "1111") == "0101");
    assert(string_xor("111111", "000000") == "111111");
    assert(string_xor("01010101", "10101010") == "11111111");
    assert(string_xor("0000", "1111") == "1111");
    return 0;
}