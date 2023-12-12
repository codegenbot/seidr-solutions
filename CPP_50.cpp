```
#include <iostream>
#include <string>

std::string encode_shift(const std::string& str) {
    // Implement the encoding logic here
}

std::string decode_shift(const std::string& str) {
    // Implement the decoding logic here
}

int main() {
    std::string str = "hello";
    std::cout << "Encoded: " << encode_shift(str) << std::endl;
    std::cout << "Decoded: " << decode_shift(encode_shift(str)) << std::endl;
    return 0;
}
```