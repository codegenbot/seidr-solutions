#include <iostream>
#include <string>
using namespace std;

string encode_cyclic(string s){ 
    int l=s.length();
    int num=(l+2)/3;
    string x,output;
    int i;
    for (i=0;i*3<l;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x.substr(1)+x[0];
        output=output+x;
    }
    return output;
}

string decode_cyclic(string s){ 
    int l=s.length();
    string x,output;
    int i;
    for (i=0;i*3<l;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x.substr(2)+x[0];
        output=output+x;
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a string to encode and decode cyclically: ";
    cin >> input;

    string encoded = encode_cyclic(input);
    string decoded = decode_cyclic(encoded);

    cout << "Encoded string: " << encoded << endl;
    cout << "Decoded string: " << decoded << endl;

    return 0;
}