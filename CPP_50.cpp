#include <string>
using namespace std;

// Declare the encode_shift function before its usage in main()
string encode_shift(string s);

int main(){
    string s = "hello";
    // Call the encode_shift function to modify the input string
    string encoded_str = encode_shift(s);
    cout << encoded_str << endl;
}

// Define the encode_shift function
string encode_shift(string s){
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-5-(int)'a')%26+(int)'a';   
        s[i]=w;
    }
    return s;
}