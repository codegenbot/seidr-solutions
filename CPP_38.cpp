```
#include <iostream>
#include <string>
using namespace std;

// Declare the encode_cyclic and decode_cyclic functions
string encode_cyclic(string);
string decode_cyclic(string);

int main() {
    string str = "Hello World!";
    // Call the encode_cyclic function to get the encoded string
    string encoded_str = encode_cyclic(str);
    cout << "Encoded string: " << encoded_str << endl;

    // Call the decode_cyclic function to get the decoded string
    string decoded_str = decode_cyclic(encoded_str);
    cout << "Decoded string: " << decoded_str << endl;

    return 0;
}
```