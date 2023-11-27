#include <string>
#include <cassert>

std::string string_xor(std::string a, std::string b) {
    std::string result;
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
    assert (string_xor("1010", "1111") == "0101");
    assert (string_xor("1100", "0011") == "1111");
    assert (string_xor("1111", "1111") == "0000");
    assert (string_xor("0000", "0000") == "0000");
    return 0;
}