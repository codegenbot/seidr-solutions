#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string decode_cyclic(string s){
    int l=s.length();
    int num=(l+2)/3;
    string x,output;
    int i;
    for (i=0;i*3<l;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x[2]+x.substr(0,2);
        output=output+x;
    }
    return output;
}

string encode_cyclic(string s){
    string encoded_str;
    int l=s.length();
    int num=(l+2)/3;
    int i;
    for (i = 0; i * 3 < l; i++) {
        string chunk=s.substr(i*3,3);
        if (chunk.length() < 3) {
            int num_to_append = 3 - chunk.length();
            while (num_to_append > 0) {
                chunk += ' ';
                num_to_append--;
            }
        }
        encoded_str += chunk[chunk.length()-1];
        encoded_str += chunk.substr(0,chunk.length()-1);
    }
    return encoded_str;
}

int main() {
    string str;
    getline(cin, str);

    string encoded_str = encode_cyclic(str);
    cout << "Encoded String: " << encoded_str << endl;

    string decoded_str = decode_cyclic(encoded_str);
    cout << "Decoded String: " << decoded_str << endl;

    assert(decoded_str == str);

    return 0;
}