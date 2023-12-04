```cpp
#include <iostream>
#include <string>
using namespace std;

string string_xor(const string& a, const string& b) {
    return a ^ b; // Use the XOR operator to perform bitwise operations on strings
}

int main() {
    string a = "010";
    string b = "110";
    cout << string_xor(a,b) << endl;
    return 0;
}
```