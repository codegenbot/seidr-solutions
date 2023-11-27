#include <iostream>
#include <string>
#include <cassert>

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
    assert(string_xor("0101", "0000") == "0101");
    assert(string_xor("1010", "1010") == "0000");
    assert(string_xor("110011", "000111") == "110100");

    cout << "All test cases passed!" << endl;

    return 0;
}