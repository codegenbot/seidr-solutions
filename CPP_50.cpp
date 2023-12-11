```
#include <iostream>
#include <string>

// Define encode_shift function
std::string encode_shift(const char* str) {
    // Implement encoding logic here
}

// Define decode_shift function
std::string decode_shift(const char* encoded_str) {
    // Implement decoding logic here
}

int main() {
    using std::string;
    string str = "hello";
    std::cout << "Encoded: " << encode_shift(str.c_str()) << std::endl;
    std::cout << "Decoded: " << decode_shift(encode_shift(str.c_str())) << std::endl;
    return 0;
}
```