#include <iostream>
#include <string>

using namespace std;

string string_xor(string a, string b) {
    string result = "";
    for(int i=0; i<a.length(); i++){
        if(a[i] == b[i]){
            result += "0";
        }else{
            result += "1";
        }
    }
    return result;
}

int main() {
    assert (string_xor("0101", "0000") == "0101");
    assert (string_xor("1111", "1111") == "0000");
    assert (string_xor("1010", "0101") == "1111");
    assert (string_xor("0011", "0101") == "0110");
    
    return 0;
}