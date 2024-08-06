#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encode_cyclic(string str){
    string output;
    for (int i=0; i*3<str.length(); i++) {
        string x = str.substr(i*3, 3);
        if (x.length() == 3) 
            x = x[2] + x.substr(0, 2);
        output += x;
    }
    return output;
}

string decode_cyclic(string str){
    string output;
    for (int i=0; i*3<str.length(); i++) {
        string x = str.substr(i*3, 3);
        if (x.length() == 3) 
            x = x[1] + x[2] + x[0];
        output += x;
    }
    return output;
}

int main() {
    string str, chr;
    cin >> str >> chr;
    str = str + chr;
    string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    cout << "Test passed" << endl;
    return 0;
}