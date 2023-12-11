```
int main() {
    // test the encode_shift and decode_shift functions
    string str = "hello";
    cout << "Encoded: " << encode_shift(str) << endl;
    cout << "Decoded: " << decode_shift(encode_shift(str)) << endl;
    return 0;
}
```