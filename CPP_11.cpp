#include <string>
#include <cassert>

string string_xor(string a, string b) {
    string result;
    for(int i=0; i<a.length(); i++){
        if(a[i] == b[i]){
            result += '0';
        }
        else{
            result += '1';
        }
    }
    return result;
}

int main() {
    assert (string_xor("0101", "0000") == "0101");
    // additional test cases
    assert (string_xor("1010", "0101") == "1111");
    assert (string_xor("1111", "0000") == "1111");
    assert (string_xor("010101", "010101") == "000000");
    assert (string_xor("101010", "010101") == "111111");
    assert (string_xor("111111", "111111") == "000000");
    assert (string_xor("000000", "000000") == "000000");
    return 0;
}