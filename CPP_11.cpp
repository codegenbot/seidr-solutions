#include <string>

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
    assert (string_xor("101100", "010101") == "111001");
    assert (string_xor("1111", "0000") == "1111");
    assert (string_xor("1100", "0011") == "1111");
    return 0;
}