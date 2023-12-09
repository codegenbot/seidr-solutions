```
#include<stdio.h>
#include<string>
using namespace std;

// Declare the encode_shift function
void encode_shift(string s);

int main() {
    // Call the encode_shift function
    string encoded_str = encode_shift("hello");
    cout << "Encoded string: " << encoded_str << endl;
    return 0;
}
```