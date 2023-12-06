```
#include <iostream>
#include <string>
using namespace std;

// Declare the functions before using them
void encode_cyclic(string& str);
void decode_cyclic(string& str);

int main() {
    string str = "Hello World!";
    // Call the functions with the correct syntax
    encode_cyclic(str);
    cout << "Encoded string: " << str << endl;
    decode_cyclic(str);
    cout << "Decoded string: " << str << endl;
    return 0;
}
```