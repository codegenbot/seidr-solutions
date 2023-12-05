```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World!";
    string encoded_str = encode_cyclic(str);
    cout << "Encoded string: " << encoded_str << endl;
    return 0;
}
```