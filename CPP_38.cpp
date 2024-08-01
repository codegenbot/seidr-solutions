#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encode_cyclic(string s){
    string output;
    string x;
    int l = s.length();
    
    for (int i = 0; i < l; i++)
    {
        x = s.substr(i, 1);
        int pos = (i * 3) % l;
        output += x;
        output += s[pos];
    }
    
    return output;
}

string decode_cyclic(string s){ 
    string output;
    string x;
    int l = s.length();
    
    for (int i = 0; i < l; i += 2)
    {
        x = s.substr(i, 1);
        output += x;
    }
    
    return output;
}

int main() {
    string input_string;
    cin >> input_string;
    string encoded_str = encode_cyclic(input_string);
    assert(decode_cyclic(encoded_str) == input_string);
    return 0;
}