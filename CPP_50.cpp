#include<iostream>
#include<string>
using namespace std;

// Declare the encode_shift and decode_shift functions before their usage in main()
void encode_shift(string s);
string decode_shift(string s);

int main(){
    string str = "hello";
    // Call the encode_shift function to modify the input string
    string encoded_str = encode_shift(str);
    cout << encoded_str << endl;
    // Call the decode_shift function to get the original string back
    string decoded_str = decode_shift(encoded_str);
    assert (decoded_str == str);
}

// Define the encode_shift and decode_shift functions
string encode_shift(string s){
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-5-(int)'a')%26+(int)'a';   
        s[i]=w;
    }
    return s;
}
string decode_shift(string s){
    // Implement the decoding logic here
}