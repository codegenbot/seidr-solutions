```
int main() {
    std::string str = "hello";
    std::cout << "Encoded: " << encode_shift(str) << std::endl;
    std::cout << "Decoded: " << decode_shift(encode_shift(str)) << std::endl;
    return 0;
}
```